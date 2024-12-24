### Bandit Level 6 → Level 7: Εύρεση αρχείου με συγκεκριμένες ιδιότητες
1. Συνδεόμαστε στον server μέσω SSH:
```console
ssh bandit6@bandit.labs.overthewire.org -p 2220
```
2. Εισάγουμε τον κωδικό που βρήκαμε στο προηγούμενο επίπεδο.
3. Χρησιμοποιούμε την εντολή `find` για να ψάξουμε το αρχείο σε ολόκληρο το σύστημα. Ψάχνουμε από τη ρίζα του συστήματος `/`, γιατί το αρχείο μπορεί να βρίσκεται οπουδήποτε. Η εντολή θα βρει αρχεία που:
- ανήκουν στον χρήστη `bandit7`
- ανήκουν στην ομάδα `bandit6`
- έχουν μέγεθος 33 bytes
Η εντολή που χρησιμοποιούμε είναι η εξής:
```console
find / -user bandit7 -group bandit6 -size 33c 2>/dev/null
```
- Τι κάνει το `2>/dev/null`: Επειδή δεν έχουμε δικαιώματα πρόσβασης σε πολλούς καταλόγους του συστήματος, αυτά θα παράγουν μηνύματα σφάλματος "Permission denied". Για να αποφύγουμε την εμφάνιση αυτών των σφαλμάτων στην οθόνη, τα κατευθύνουμε στο `/dev/null`, δηλαδή τα αγνοούμε.
4. Το αρχείο που ταιριάζει με τα κριτήρια είναι `/var/lib/dpkg/info/bandit7.password`
5. Διαβάζουμε το περιεχόμενο του αρχείου:
```console
cat /var/lib/dpkg/info/bandit7.password
```
6. Ο κωδικός για το επόμενο επίπεδο εμφανίζεται στην οθόνη.