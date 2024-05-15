#include <signal.h>
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int p;
long long switchWin, noswitch;
long long n, i;
int door;
volatile sig_atomic_t signo = 0;

void help(const char *);
int pickdoor();

static void catch_function(int sig) { signo = sig; }

int main(int argc, const char **args) {
  if (argc == 1) {
    help(args[0]);
    exit(0);
  }
  n = atoll(args[1]);

  signal(SIGINT, catch_function);

  srand(time(NULL));

  switchWin = 0;
  noswitch = 0;
  printf("Start simulating tests, use ^-C to cancel.\n");

  for (i = 0; i < n; i++) {
    if (signo == SIGINT)
      break;
    door = pickdoor();
    p = pickdoor();
    if (p == door) {
      noswitch++;
    } else {
      switchWin++;
    }
  }

  printf("\rTotal tests: %lld, switch win: %lld, no switch win: %lld\n", i,
         switchWin, noswitch);
  printf("Switch win propability: %.2f%%, no switch win propability: %.2f%%\n",
         100.0 * switchWin / i, 100.0 * noswitch / i);
  return 0;
}

int pickdoor() {
  int r;
  do {
    r = rand();
    if (r >= RAND_MAX - 1)
      continue;
    return r / (RAND_MAX / 3);
  } while (true);
}
void help(const char *arg) {
  printf("%s <n>\n", arg);
  printf("   n: amount of tests, 1e9 can take up to 30s to finish");
}
