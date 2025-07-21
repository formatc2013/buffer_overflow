Demonstrate a buffer overflow    

Automate exploit using pwntools and gdb gef.   

Only tried with:   
-fno-stack-protector -m32 -no-pie    

see notes.txt    

These should be enough to get started  
echo 0 | sudo tee /proc/sys/kernel/randomize_va_space 
g++ -o simple_buffer_overflow simple_buffer_overflow.cpp -fno-stack-protector -m32 -no-pie -z execstack 
echo 0 | sudo tee /proc/sys/kernel/randomize_va_space 
python exploit.py simple_buffer_overflow
   - type exit to exit gdb popup   
rm -rf core_dumps/*;python exploit.py ./simple_buffer_overflow ; gdb simple_buffer_overflow  core_dumps/core.simple_buffer_o.*
