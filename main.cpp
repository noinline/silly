#include <cstdint>
#include <malloc.h>
#include <unistd.h>

typedef struct
{
  void (*hi)();
} silly;

__attribute((noinline)) auto
teeHee(void) -> decltype(void())
{
  const char *h[] = {"w", "w", "h", "e", "o"};
  const char *w[] = {"l", "d", "r", "w", "o"};
  const char *b[] = {">", "!", " ", "<", "w", "\n"};
  asm volatile("movq $1, %%rax;"
               "movq $1, %%rdi;"
               "movq %0, %%rsi;"
               "movq $1, %%rdx;"
               "syscall;"
               :
               : "r"(h[2])
               : "%rax", "%rdi", "%rsi", "%rdx");
  asm volatile("movq $1, %%rax;"
               "movq $1, %%rdi;"
               "movq %0, %%rsi;"
               "movq $1, %%rdx;"
               "syscall;"
               :
               : "r"(h[3])
               : "%rax", "%rdi", "%rsi", "%rdx");
  asm volatile("movq $1, %%rax;"
               "movq $1, %%rdi;"
               "movq %0, %%rsi;"
               "movq $1, %%rdx;"
               "syscall;"
               :
               : "r"(h[0])
               : "%rax", "%rdi", "%rsi", "%rdx");
  asm volatile("movq $1, %%rax;"
               "movq $1, %%rdi;"
               "movq %0, %%rsi;"
               "movq $1, %%rdx;"
               "syscall;"
               :
               : "r"(h[1])
               : "%rax", "%rdi", "%rsi", "%rdx");
  asm volatile("movq $1, %%rax;"
               "movq $1, %%rdi;"
               "movq %0, %%rsi;"
               "movq $1, %%rdx;"
               "syscall;"
               :
               : "r"(h[4])
               : "%rax", "%rdi", "%rsi", "%rdx");
  asm volatile("movq $1, %%rax;"
               "movq $1, %%rdi;"
               "movq %0, %%rsi;"
               "movq $1, %%rdx;"
               "syscall;"
               :
               : "r"(b[2])
               : "%rax", "%rdi", "%rsi", "%rdx");
  asm volatile("movq $1, %%rax;"
               "movq $1, %%rdi;"
               "movq %0, %%rsi;"
               "movq $1, %%rdx;"
               "syscall;"
               :
               : "r"(w[3])
               : "%rax", "%rdi", "%rsi", "%rdx");
  asm volatile("movq $1, %%rax;"
               "movq $1, %%rdi;"
               "movq %0, %%rsi;"
               "movq $1, %%rdx;"
               "syscall;"
               :
               : "r"(w[4])
               : "%rax", "%rdi", "%rsi", "%rdx");
  asm volatile("movq $1, %%rax;"
               "movq $1, %%rdi;"
               "movq %0, %%rsi;"
               "movq $1, %%rdx;"
               "syscall;"
               :
               : "r"(w[2])
               : "%rax", "%rdi", "%rsi", "%rdx");
  asm volatile("movq $1, %%rax;"
               "movq $1, %%rdi;"
               "movq %0, %%rsi;"
               "movq $1, %%rdx;"
               "syscall;"
               :
               : "r"(w[0])
               : "%rax", "%rdi", "%rsi", "%rdx");
  asm volatile("movq $1, %%rax;"
               "movq $1, %%rdi;"
               "movq %0, %%rsi;"
               "movq $1, %%rdx;"
               "syscall;"
               :
               : "r"(w[1])
               : "%rax", "%rdi", "%rsi", "%rdx");
  asm volatile("movq $1, %%rax;"
               "movq $1, %%rdi;"
               "movq %0, %%rsi;"
               "movq $1, %%rdx;"
               "syscall;"
               :
               : "r"(b[1])
               : "%rax", "%rdi", "%rsi", "%rdx");
  asm volatile("movq $1, %%rax;"
               "movq $1, %%rdi;"
               "movq %0, %%rsi;"
               "movq $1, %%rdx;"
               "syscall;"
               :
               : "r"(b[2])
               : "%rax", "%rdi", "%rsi", "%rdx");
  asm volatile("movq $1, %%rax;"
               "movq $1, %%rdi;"
               "movq %0, %%rsi;"
               "movq $1, %%rdx;"
               "syscall;"
               :
               : "r"(b[0])
               : "%rax", "%rdi", "%rsi", "%rdx");
  asm volatile("movq $1, %%rax;"
               "movq $1, %%rdi;"
               "movq %0, %%rsi;"
               "movq $1, %%rdx;"
               "syscall;"
               :
               : "r"(b[4])
               : "%rax", "%rdi", "%rsi", "%rdx");
  asm volatile("movq $1, %%rax;"
               "movq $1, %%rdi;"
               "movq %0, %%rsi;"
               "movq $1, %%rdx;"
               "syscall;"
               :
               : "r"(b[3])
               : "%rax", "%rdi", "%rsi", "%rdx");
  asm volatile("movq $1, %%rax;"
               "movq $1, %%rdi;"
               "movq %0, %%rsi;"
               "movq $1, %%rdx;"
               "syscall;"
               :
               : "r"(b[5])
               : "%rax", "%rdi", "%rsi", "%rdx");
}

__attribute((noinline)) auto
main(void) -> decltype(std::int32_t())
{
  silly *hewwo = (silly *) malloc(sizeof(silly));
  hewwo->hi = &teeHee;

  ((void (*)())(hewwo->hi))();
  free(hewwo);

  constexpr std::int32_t rawrturn{};
  asm volatile("mov $60, %%rax;"
               "mov %[rawrturn], %%rdi;"
               "syscall;"
               :
               : [rawrturn] "i"(1) /* oh wow :3 */
               : "%rax", "%rdi");
  __builtin_unreachable();
}
