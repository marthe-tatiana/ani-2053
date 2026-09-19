# Exercice 2

Pour cet exercice,il était question de modifier un fichier,et d'afficher git status après chaque étape : modification, add, commit.Ainsi que de Rendre les trois sorties et dire ce qui change entre elles.

# Modification du fichier

```bash
PS C:\Users\alang_marthe> cd documents
PS C:\Users\alang_marthe\documents> cd exo-git
PS C:\Users\alang_marthe\documents\exo-git> code fichier1.txt
```

# "git status" après modification

```bash
PS C:\Users\alang_marthe\documents\exo-git> git status
On branch master
Changes not staged for commit:
  (use "git add <file>..." to update what will be committed)
  (use "git restore <file>..." to discard changes in working directory)
        modified:   fichier1.txt

no changes added to commit (use "git add" and/or "git commit -a")
```

# "git status" après add

```bash
PS C:\Users\alang_marthe\documents\exo-git> git add "fichier1.txt"
PS C:\Users\alang_marthe\documents\exo-git> git status
On branch master
Changes to be committed:
  (use "git restore --staged <file>..." to unstage)
        modified:   fichier1.txt
 ```

# "git status" après commit

```bash
PS C:\Users\alang_marthe\documents\exo-git> git commit -m "Modification du fichier texte 1"
[master 11f9401] Modification du fichier texte 1
 1 file changed, 0 insertions(+), 0 deletions(-)
 ```

 # Différence entre les trois sorties

```txt
 La pricncipale différence entre les trois sorties est que lorsqu'on modifie le fichier il est certes modifié dans notre Vscode mais pas dans github,alors lorsqu'on l'ajoute dans github il est automatiquement modifié dans notre ordinateur mais pas dans notre dépot.Et enfin,lorsqu'on commit il est automatiquement modifié dans notre dépot.
 ```