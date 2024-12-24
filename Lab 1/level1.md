### Bandit Level 1 → Level 2: Ανάγνωση αρχείου με ειδικό όνομα

1. Συνδεόμαστε στον server μέσω SSH:
```console
ssh bandit1@bandit.labs.overthewire.org -p 2220
```
2. Εισάγουμε τον κωδικό πρόσβασης που βρήκαμε στο προηγούμενο επίπεδο.
3. Ελέγχουμε τα αρχεία στον κατάλογο:
```console
ls
```
4. Βρίσκουμε ένα αρχείο με το όνομα `-`. Για να διαβάσουμε το περιεχόμενό του, χρησιμοποιούμε την εντολή:
```console
cat ./-
```
5. Ο κωδικός για το επόμενο επίπεδο εμφανίζεται στην οθόνη.