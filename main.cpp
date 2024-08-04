/* i'm here to introduce you my brainrot powered main.cpp file that i created to
 * fulfill my sensless existence with something nice and funny! */
#include <cstdint>
#include <unistd.h>

typedef struct /* braindamage */
{
  void (*hi)();
} silly;

__attribute((noinline)) auto
teeHee(void) -> decltype(void())
{
  /* this function can be done in less lines but it looks ugly just like that,
   * and i also like how it looks so... cope + ratio + l + don't care + didn't
   * asked + stfu + you fell off + cry about it! */
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
meowlloc(size_t size) -> void * /* ain't no way did you guys noticed too? */
{
  /* tiny program break syscall implementation, because i don't want to use
   * malloc like normal human beings -_- */
  void *powointer = sbrk(
      0); /* find the current program break location by passing 0 to sbrk */
  if (powointer == (void *) -1)
    return nullptr; /* EXPLOSION O_o*/

  char *newPowointer = static_cast<char *>(powointer) + size;

  powointer = sbrk(size); /* next location */

  return (powointer == (void *) -1) ? nullptr
                                    : reinterpret_cast<void *>(newPowointer);
}

__attribute((noinline)) auto
freeMeowmory(void *powointer) -> decltype(void())
{
  if (sbrk(-static_cast<int>(reinterpret_cast<char *>(powointer) -
                             static_cast<char *>(sbrk(0))) /
           sizeof(char *)) == (void *) -1)
  {
    const char *ret[] = {"void freeMeowmory() explode..."};
    asm volatile("movq $1, %%rax;"
                 "movq $1, %%rdi;"
                 "movq %0, %%rsi;"
                 "movq $1, %%rdx;"
                 "syscall;"
                 :
                 : "r"(ret[0])
                 : "%rax", "%rdi", "%rsi", "%rdx");
  }
}

__attribute((noinline)) auto
main(void) -> decltype(std::int32_t())
{
  silly *hewwo = (silly *) meowlloc(sizeof(silly));
  hewwo->hi = &teeHee;

  ((void (*)())(hewwo->hi))();
  freeMeowmory(hewwo);

  constexpr std::int32_t retuwurn{
      0xff}; /* will output 255, and actually same effect can be achieved by
                passing -1 */
  asm volatile("mov $60, %%rax;"
               "mov %[retuwurn], %%rdi;"
               "syscall;"
               :
               : [retuwurn] "i"(retuwurn) /* oh wow such a useless thing :3 */
               : "%rax", "%rdi");
  __builtin_unreachable();
}
