#include <math.h>  // Απαιτείται για τη χρήση της συνάρτησης sqrt
#include <stdio.h>

void pi_approx() {
  // Αρχικοποίηση του αθροίσματος
  double sum_total = 0.0;
  double current_term;  // Ενδιάμεση μεταβλητή για τον τρέχοντα όρο
  int i = 1;

  // Χρήση της επανάληψης do...while με κριτήριο ακρίβειας 10^(-15)
  do {
    current_term = 1.0 / (i * i);
    sum_total += current_term;
    i++;
  } while (current_term >= 1e-15);

  // Υπολογισμός της προσέγγισης του π
  double pi = sqrt(6 * sum_total);

  // Εκτύπωση του αποτελέσματος
  printf("Approximate value of pi: %.15f\n", pi);
}

int main() {
  // Κλήση της συνάρτησης
  pi_approx();
  return 0;
}

// Μεταγλώττιση: gcc seq_pi_approx_10.c -o seq_pi_approx_10 -lm
// Εκτέλεση: ./seq_pi_approx_10
// Έξοδος:
// Approximate value of pi: 3.141572046272299