<h1>Lecture 2</h1>

**Random announcement:  Devx. Apply at ucladevx.com**

**Reminder: Midterms on the 26th and the 16th of november**
<h3>General Guidelines for the Class</h3>
<ul>
    <li>Most likely 8 or so programming problems</li>
    <li>Grading will be done by both the TA's and the online website in a zip format
        <ul>
            <li>There will also be many tests run on each program to meme out.</li>
        </ul>
    </li>
    <li>***Code can be written in any DE, but it must compile successfully in both Visual C++ and g31 linux***
    </li>
    <li>***make sure the linux server that you use is cs31.seas.ucla.edu***</li>
    <li>All code should match the output in the spec, or else you will receive a  very low score.</li>
    <li>Make ***sure*** you make frequent backups of your work</li>
    <li>Projects may or may not be supplemented with homework on daily </li>
    <li>Develop incrementally so that you can identify problems as they occur</li>



<li> Y'all gotta do things efficiently.
</li>
<li>Key advice:   Start Early!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
</li>
<li>Also, remember to bring the academic integrity sheet.
</li>


</ul>



<h3>**Main chibb**</h3>

**Von Neumann Architecture** A way of storing programming commands as integers to that a seperate location is not necessary for commands and data.

**Machine Language:**

CPU: 

Accumulator: 63259
Instruction Counter: 000

Memory can only recall the locations of data.

the CPU takes the instruction counter and tells the memory to retrieve data from a certain address.


99                      999
operation code          address

operation code tells the cpu which subcircuit to activate(which process to do)

21: copy the number at the indicated memory address into the accumulator.
11: Add the number at the indicated memory address to the accumulator.
22: Copy the number in the accumulator to the indicated memory location
99: halt (address part is ignored)          

After each step, the instruction counter is incremented.

**all arithmetic is handled by the ALU (Arithmetic Logic Unit)

more about alu and specific parts of the cpu in cs51

this confusion is why machine language is so difficult to comprehend with modern more high-level languages.


To make the task of programming less tedious and less prone to mistakes, key words were made to represent values which could be easily converted into machine language. This was the advent of assembly language.

An assembler would assemble assembly code into machine language.

There is generally a 1:1 translation between assembly language to machine language.