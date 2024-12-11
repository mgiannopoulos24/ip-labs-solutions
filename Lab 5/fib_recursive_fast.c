#include <stdio.h>

// Συνάρτηση για τον υπολογισμό του n-οστού αριθμού της ακολουθίας Fibonacci με
// βελτιωμένη αναδρομή (memoization)
int fib_rec_fast(int n) {
  // Δημιουργία πίνακα για την αποθήκευση των υπολογισμένων τιμών της ακολουθίας
  // Fibonacci
  int memo[n + 1];

  // Αρχικοποίηση του πίνακα με -1 για να υποδεικνύει ότι οι τιμές δεν έχουν
  // υπολογιστεί ακόμα
  for (int i = 0; i <= n; i++) {
    memo[i] = -1;
  }

  // Αν n είναι 0, επιστρέφουμε 0 (βάση της ακολουθίας Fibonacci)
  if (n == 0) {
    return 0;
  }

  // Αν n είναι 1, επιστρέφουμε 1 (βάση της ακολουθίας Fibonacci)
  if (n == 1) {
    return 1;
  }

  // Έλεγχος αν η τιμή για το n έχει ήδη υπολογιστεί και επιστρέφεται από τον
  // πίνακα memo
  if (memo[n] != -1) {
    return memo[n];
  }

  // Υπολογισμός της τιμής Fibonacci με αναδρομή και αποθήκευσή της στον πίνακα
  // memo
  memo[n] = fib_rec_fast(n - 1) + fib_rec_fast(n - 2);
  return memo[n];
}

int main() {
  int terms;

  // Ζητάμε από τον χρήστη να δώσει τον αριθμό των όρων που θέλει να εκτυπωθούν
  printf("How many Fibonacci terms would you like: ");
  if (scanf("%d", &terms) != 1) {
    // Μήνυμα λάθους αν η είσοδος δεν είναι έγκυρος αριθμός
    printf("Error: Invalid input. Please enter a valid number.\n");
    return 1;
  }

  // Έλεγχος αν ο αριθμός των όρων είναι αρνητικός
  if (terms < 0) {
    printf("Error: Number of terms cannot be negative.\n");
    return 1;
  }

  // Εκτύπωση των όρων της ακολουθίας Fibonacci
  for (int i = 0; i < terms; i++) {
    int result = fib_rec_fast(i);
    printf("fib(%d) = %d\n", i, result);
  }

  return 0;
}

// Μεταγλώττιση:
// gcc -o fib_recursive_fast fib_recursive_fast.c
// Εκτέλεση:
// ./fib_recursive_fast
// Έξοδος:
// How many Fibonacci terms would you like: 10
// fib(0) = 0
// fib(1) = 1
// fib(2) = 1
// fib(3) = 2
// fib(4) = 3
// fib(5) = 5
// fib(6) = 8
// fib(7) = 13
// fib(8) = 21
// fib(9) = 34
