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
PS C:\Users\alang_marthe\documents\exo-git> git status
On branch master
Untracked files:
  (use "git add <file>..." to include in what will be committed)
        fichier.txt

nothing added to commit but untracked files present (use "git add" to track)
 ```

 # Différence entre les trois sorties

```txt
 Après avoir modifié un fichier,la commande "git status" permet de voir son état dans Git.Si le fichier apparait comme modified,celà signifie qu'il a été modifié sur l'ordinateur mais que la modification n'a pas encore préparée pour etre enregistré.La commande git add place ensuite cette modification dans la zone de préparation(staging area).Le fichier apparait alors sous "Changes to be committed",ce qui signifie qu'il est pret à enregistré dans un commit.Enfin,la commande "git commit" enregistre la modification dans l'histoirique local du projet.Si l'on tape ensuite "git status",Git affiche généralement "nothing to commit,work tree clean":cela signifie qu'il n'y'a plus de modification en attente.Pour que cette modification apparaisse également sur Github,il faut terminer par la commande "git push".
 ```
