// Συνάρτηση που δέχεται δεδομένα μέσω δεικτών
void goodf(int x, int y, int *sum, int *diff) {
  *sum = x + y;  // Υπολογισμός του αθροίσματος και αποθήκευση μέσω δείκτη
  *diff = x - y;  // Υπολογισμός της διαφοράς και αποθήκευση μέσω δείκτη
}
