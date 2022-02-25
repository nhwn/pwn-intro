from pwn import *

context.arch = "amd64"

# this is just one example of the shellcode that you can get for free :tm:
raw_asm = shellcraft.echo("hello there");
machine_code = asm(raw_asm)
c_string = "".join("\\x%02x" % x for x in machine_code);
print(c_string)
