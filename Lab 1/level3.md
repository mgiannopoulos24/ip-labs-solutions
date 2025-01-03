### Bandit Level 3 → Level 4: Εύρεση κρυφού αρχείου
1. Συνδεόμαστε στον server μέσω SSH:
```console
ssh bandit3@bandit.labs.overthewire.org -p 2220
```
2. Εισάγουμε τον κωδικό που βρήκαμε στο προηγούμενο επίπεδο.
3. Ελέγχουμε τα περιεχόμενα του καταλόγου:
```console
ls
```
Βρίσκουμε τον φάκελο `inhere`.
4. Μεταβαίνουμε στον φάκελο `inhere`:
```console
cd inhere/
```
5. Χρησιμοποιούμε την εντολή `ls -la` για να εμφανίσουμε και τα κρυφά αρχεία:
```console
ls -la
```
6. Βλέπουμε το κρυφό αρχείο `...Hiding-From-You`. Για να διαβάσουμε το περιεχόμενό του, πληκτρολογούμε:
```console
cat ...Hiding-From-You
```
7. Ο κωδικός για το επόμενο επίπεδο εμφανίζεται στην οθόνη.