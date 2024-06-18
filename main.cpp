#include <iostream>
#include <unistd.h>

typedef struct
{
  void (*hi)();
} silly;

auto
teeHee() -> decltype(void())
{
  const char *h = "w";
  const char *h1 = "w";
  const char *h2 = "h";
  const char *h3 = "e";
  const char *h4 = "o";

  const char *w = "l";
  const char *w1 = "d";
  const char *w2 = "r";
  const char *w3 = "w";
  const char *w4 = "o";

  const char *b = ">";
  const char *b1 = "!";
  const char *b2 = " ";
  const char *b3 = "<";
  const char *b4 = "w";
  const char *b5 = "\n";

  asm volatile("movq $1, %%rax;"
               "movq $1, %%rdi;"
               "movq %0, %%rsi;"
               "movq $1, %%rdx;"
               "syscall;"
               :
               : "r"(h2)
               : "%rax", "%rdi", "%rsi", "%rdx");

  asm volatile("movq $1, %%rax;"
               "movq $1, %%rdi;"
               "movq %0, %%rsi;"
               "movq $1, %%rdx;"
               "syscall;"
               :
               : "r"(h3)
               : "%rax", "%rdi", "%rsi", "%rdx");

  asm volatile("movq $1, %%rax;"
               "movq $1, %%rdi;"
               "movq %0, %%rsi;"
               "movq $1, %%rdx;"
               "syscall;"
               :
               : "r"(h)
               : "%rax", "%rdi", "%rsi", "%rdx");

  asm volatile("movq $1, %%rax;"
               "movq $1, %%rdi;"
               "movq %0, %%rsi;"
               "movq $1, %%rdx;"
               "syscall;"
               :
               : "r"(h1)
               : "%rax", "%rdi", "%rsi", "%rdx");

  asm volatile("movq $1, %%rax;"
               "movq $1, %%rdi;"
               "movq %0, %%rsi;"
               "movq $1, %%rdx;"
               "syscall;"
               :
               : "r"(h4)
               : "%rax", "%rdi", "%rsi", "%rdx");

  asm volatile("movq $1, %%rax;"
               "movq $1, %%rdi;"
               "movq %0, %%rsi;"
               "movq $1, %%rdx;"
               "syscall;"
               :
               : "r"(b2)
               : "%rax", "%rdi", "%rsi", "%rdx");

  asm volatile("movq $1, %%rax;"
               "movq $1, %%rdi;"
               "movq %0, %%rsi;"
               "movq $1, %%rdx;"
               "syscall;"
               :
               : "r"(w3)
               : "%rax", "%rdi", "%rsi", "%rdx");

  asm volatile("movq $1, %%rax;"
               "movq $1, %%rdi;"
               "movq %0, %%rsi;"
               "movq $1, %%rdx;"
               "syscall;"
               :
               : "r"(w4)
               : "%rax", "%rdi", "%rsi", "%rdx");

  asm volatile("movq $1, %%rax;"
               "movq $1, %%rdi;"
               "movq %0, %%rsi;"
               "movq $1, %%rdx;"
               "syscall;"
               :
               : "r"(w2)
               : "%rax", "%rdi", "%rsi", "%rdx");

  asm volatile("movq $1, %%rax;"
               "movq $1, %%rdi;"
               "movq %0, %%rsi;"
               "movq $1, %%rdx;"
               "syscall;"
               :
               : "r"(w)
               : "%rax", "%rdi", "%rsi", "%rdx");

  asm volatile("movq $1, %%rax;"
               "movq $1, %%rdi;"
               "movq %0, %%rsi;"
               "movq $1, %%rdx;"
               "syscall;"
               :
               : "r"(w1)
               : "%rax", "%rdi", "%rsi", "%rdx");

  asm volatile("movq $1, %%rax;"
               "movq $1, %%rdi;"
               "movq %0, %%rsi;"
               "movq $1, %%rdx;"
               "syscall;"
               :
               : "r"(b1)
               : "%rax", "%rdi", "%rsi", "%rdx");

  asm volatile("movq $1, %%rax;"
               "movq $1, %%rdi;"
               "movq %0, %%rsi;"
               "movq $1, %%rdx;"
               "syscall;"
               :
               : "r"(b2)
               : "%rax", "%rdi", "%rsi", "%rdx");

  asm volatile("movq $1, %%rax;"
               "movq $1, %%rdi;"
               "movq %0, %%rsi;"
               "movq $1, %%rdx;"
               "syscall;"
               :
               : "r"(b)
               : "%rax", "%rdi", "%rsi", "%rdx");

  asm volatile("movq $1, %%rax;"
               "movq $1, %%rdi;"
               "movq %0, %%rsi;"
               "movq $1, %%rdx;"
               "syscall;"
               :
               : "r"(b4)
               : "%rax", "%rdi", "%rsi", "%rdx");

  asm volatile("movq $1, %%rax;"
               "movq $1, %%rdi;"
               "movq %0, %%rsi;"
               "movq $1, %%rdx;"
               "syscall;"
               :
               : "r"(b3)
               : "%rax", "%rdi", "%rsi", "%rdx");

  asm volatile("movq $1, %%rax;"
               "movq $1, %%rdi;"
               "movq %0, %%rsi;"
               "movq $1, %%rdx;"
               "syscall;"
               :
               : "r"(b5)
               : "%rax", "%rdi", "%rsi", "%rdx");
}

auto
main(void) -> decltype(int())
{
  silly *hewwo = (silly *) malloc(sizeof(silly));

  hewwo->hi = &teeHee;

  ((void (*)())(hewwo->hi))();

  free(hewwo);
  return 0;
}
