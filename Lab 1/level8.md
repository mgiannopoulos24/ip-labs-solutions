### Bandit Level 8 → Level 9: Εύρεση μοναδικής γραμμής
1. Συνδεόμαστε στον server μέσω SSH:
```console
ssh bandit8@bandit.labs.overthewire.org -p 2220
```
2. Εισάγουμε τον κωδικό που βρήκαμε στο προηγούμενο επίπεδο.
3. Ελέγχουμε τα περιεχόμενα του καταλόγου:
```console
ls
```
Βρίσκουμε το αρχείο `data.txt`.
4. Χρησιμοποιούμε τις εντολές `sort` και `uniq` για να εντοπίσουμε τη γραμμή που εμφανίζεται μόνο μία φορά:
```console
sort data.txt | uniq -c | sort -n | head -1
```
- **sort data.txt**: Ταξινομεί το περιεχόμενο του αρχείου αλφαβητικά.
- **uniq -c**: Μετράει την εμφάνιση κάθε γραμμής.
- **sort -n**: Ταξινομεί τα αποτελέσματα κατά αριθμό εμφανίσεων.
- **head -1**: Εμφανίζει την πρώτη γραμμή, δηλαδή αυτή που εμφανίζεται μόνο μία φορά.
5. Ο κωδικός που εμφανίζεται είναι:
```console
    1 ................................
```