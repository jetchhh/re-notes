# Week 05 - Conditional Jumps & Control Flow

### What I wanted to understand:
How conditional jumps work in assembly, how CMP sets flags, 
and how to apply this to solve a crackme with encoded strings.

### Tools used
- OST2 Arch1001 (theory)
- Ghidra 11.x
- Python 3
- Terminal/Zsh

### Process
- Studied JMP, CMP and conditional jumps (JZ, JNZ, JE, JNE) in OST2
- Learned how CMP performs a subtraction without storing the result, 
  only updating the Zero Flag
- Analyzed a level 2 crackme in Ghidra that used hex-encoded strings
- Found the comparison function using strcmp and traced back to the 
  decoding function FUN_001012a0
- Identified that the function used strtol with base 16 to convert 
  hex strings to readable text
- Decoded the password using Python: `bytes.fromhex("hex_string").decode()`
- Verified the password by running the crackme

### Where I got stuck
I didn't recognize the hex decoding pattern initially — I had no prior 
knowledge of encoding methods. Once I understood that strtol with base 
0x10 converts hex to bytes, the rest was straightforward.

### What I learned
- CMP sets the Zero Flag based on whether two values are equal
- JZ jumps if ZF=1 (values equal), JNZ jumps if ZF=0 (values not equal)
- All conditional jumps share the same mechanics — only the condition differs
- Hex encoding is a simple obfuscation technique — not real cryptography
- strtol with base 16 is a common pattern for hex string decoding in C
- Short jumps use 1 byte offset (±127), near jumps use 4 bytes (±2GB)
- The offset is calculated from RIP, which already points to the next instruction

### Next step
Week 06 — Calling conventions (cdecl, stdcall, fastcall, x64 ABI).