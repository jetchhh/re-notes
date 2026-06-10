# Week 04 - The Stack & Function Calls

### What I wanted to understand:
How the stack works at a low level, including PUSH/POP mechanics, 
function prologues/epilogues, and how CALL/RET manage execution flow.

### Tools used
- OST2 Arch1001 (theory)
- x64dbg (May 27 2026 build)
- gcc 15.2.0
- Windows 10 (dual boot)

### What I learned
- PUSH decrements RSP by 8 and writes a value to the top of the stack. POP reads from the top and increments RSP by 8
- The stack grows downward lower addresses are newer entries
- CALL saves the return address on the stack (RSP - 8) and jumps to the function. RET pops that address and jumps back
- Function prologue: consecutive PUSHes to save registers + `sub rsp, X` to reserve space for local variables
- Function epilogue: `add rsp, X` + POPs in reverse order + `ret` perfectly mirrors the prologue
- SIB addressing: `[base + index*scale + displacement]` used for array and struct field access. Scale (1/2/4/8) matches the size of the data type. Displacement is a fixed offset to a field within a struct
- The stack must be perfectly balanced at RET any mismatch causes a crash because RET reads garbage instead of the return address

### Next step
Week 05 Conditional jumps and loops (CMP, JZ, JNZ).