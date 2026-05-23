# Week 03 - x86/x64 Assembly Basics

### What I wanted to understand:

Introduction to x86/x64 assembly, registers, endianness, and writing
a basic program in NASM.

### Tools used

- NASM 3.01
- GCC 15.2.1
- Ghidra 12.1
- objdump
- Terminal/Zsh

### Process 

- Watched OST2 Arch1001 lectures on registers and endianness
- Wrote and compiled a hello world in NASM x64 using syscalls
- Analyzed the generated assembly with objdump -d
- Resolved a level 1 crackme using Ghidra

### What I learned 
- Registers and their conventions: RAX, RDI, RSI, RDX, RSP, RBP, RIP
- Little-endian vs big-endian, endianness only applies to memory, not registers
- NOP instruction, used for padding and alignment
- How Linux syscalls work: syscall number in RAX, arguments in RDI, RSI, RDX
- EAX is the lower 32 bits of RAX, registers have partial access

### Next step 
Week 04 - x86 stack and function calls, PUSH/POP, CALL/RET.

