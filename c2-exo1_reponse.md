xercice 1
L'exercice consistait à:

créer un dépot vide:
PS C:\Users\alang_marthe\Documents\exo-git> git init Initialized empty Git repository in C:/Users/alang_marthe/Documents/exo-git/.git/

Ajouter trois fichier en commit
PS C:\Users\alang_marthe\Documents\exo-git> git commit -m "Ajout du premier fichier" [master (root-commit) cbd1359] Ajout du premier fichier 1 file changed, 0 insertions(+), 0 deletions(-) create mode 100644 fichier1.txt PS C:\Users\alang_marthe\Documents\exo-git> echo "Deuxième fichier" > fichier2.txt PS C:\Users\alang_marthe\Documents\exo-git> git add fichier2.txt PS C:\Users\alang_marthe\Documents\exo-git> git commit -m "Ajout du deuxième fichier" [master 2a53444] Ajout du deuxième fichier 1 file changed, 0 insertions(+), 0 deletions(-) create mode 100644 fichier2.txt PS C:\Users\alang_marthe\Documents\exo-git> echo "troisième fichier" > fichier3.txt PS C:\Users\alang_marthe\Documents\exo-git> git add fichier3.txt PS C:\Users\alang_marthe\Documents\exo-git> git commit -m "Ajout du troisième fichier" [master b0158a1] Ajout du troisième fichier 1 file changed, 0 insertions(+), 0 deletions(-) create mode 100644 fichier3.txt

historique en une ligne par commit:
PS C:\Users\alang_marthe\Documents\exo-git> git log --oneline b0158a1 (HEAD -> master) Ajout du troisième fichier 2a53444 Ajout du deuxième fichier cbd1359 Ajout du premier fichier

graphe de l'historique:
PS C:\Users\alang_marthe\Documents\exo-git> git log --oneline --graph --decorate

b0158a1 (HEAD -> master) Ajout du troisième fichier
2a53444 Ajout du deuxième fichier
cbd1359 Ajout du premier fichier
