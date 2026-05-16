# Week 02 - Compilation Process & Binary Analysis 

### What I wanted to understand:

How GCC transforms C code into an executable, and what each intermediate step looks like 

### Tools used

- GCC 15.2.1
- objdump
- cat 

### Process 

**I ran each compilation stage separately on my linked list from last week:**

- `-E` for preprocessing, the output was surprisingly large, mostly expanded contens of `stdio.h` and `stdlib.h`
-`-S` for assembly, GCC translated my C code into x86 assembly 
- `-c` for the object file, reading it with `cat` produced unreadable binary, which makes sense since it's not a text file
- `objdump -d` to disassemble the object file into readable assembly 

### Where I got stuck 

Reading the raw object file with `cat` looked like garbage, had to use `objdump` to get readable output 

### What I learned 

The generated assembly was shorter than expected. A few lines of C translate to relatively few instructions without optimizations. Compiling with -O2 produced noticeably different output, the compiler reorganized and reduced the code significantly.

### Next step 

Week 03, x86 assembly basics with OST2 Arch1001. Start recognizing these instructions intentionally 
