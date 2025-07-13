Demonstrate a buffer overflow    

Automate exploit using pwntools and gdb gef.   

Only tried with:   
-fno-stack-protector -m32 -no-pie    

see notes.txt    

These should be enough to get started   
g++ -o simple_buffer_overflow simple_buffer_overflow.cpp -fno-stack-protector -m32 -no-pie  
python exploit.py simple_buffer_overflow giveshell --seqlen 500  
   - type exit to exit gdb popup   
