# cppnotes / self-quiz

From the book: "The Pragmatic Programmer":

Q: What is "tracer code"?
Q: Give two ways to define an immutable variable in cpp.

Q: Give two uses for sizeof

Q: How do you allocate memory dynamically? 
A: One way is casting to integer pointer.
    int* ptr = (int*) malloc(10 * sizeof(int));

philosophical/practical differences between java/c++
https://www.quora.com/What-are-major-differences-between-C++-and-Java?share=1
- C++ not cross-platform, by the way, because its executable is machine-code. Must be compiled on the machine that it is run on.
- Java compiles to bytecode so that it can be run cross-platform.
