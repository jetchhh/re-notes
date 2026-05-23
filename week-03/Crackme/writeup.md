# Week 03 - Crackme Lvl 1

### What I wanted to understand:

How to use ghidra, find the main function from the program, understand what it does and resolve the crackme.

### Tools used

- Ghidra 12.1
- Terminal/Zsh

### Process 

**I ran the binary program in a way to undertand how it works**
- I ran the program `./simp-password` and it asked a password. 
- I opened the binary on Ghidra and found the main function.
- Inside the main function I found the strcmp, it is the function that compares the input, in this case it expects an input called `"iloveicecream"`.
- I went back to the program and put the password, and i got the output:
```
❯ ./simp-password
Enter password: iloveicecream
I love ice cream too!
```

### Where I got stuck 
This crackme was straightforward, the password was stored as plaintext and visible directly in Ghidra's decompiled output. No real obstacles.

### What I learned 
I familiarized myself with Ghidra's workflow, understood how to find the main function on Ghidra and how to resolve a lvl 1 crackme that requires a password 

### Next step 
Week 04 — x86 stack and function calls. Return to this crackme's more complex version once CMP and JZ are covered 

