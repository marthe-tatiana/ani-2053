# Exercice 1 Chapitre 3

Cet exercice consiste à écrire le programme le plus court possible pour:
-Ouvrir une fenetre,
-la garde ouverte(ne la ferme pas immédiatement),
-se termine proprement (nettoyage avant return 0),
-Compter ses lignes 
-Retrouver chaque ligne dans le chapitre du cours(fournir une explication en lien avec le cours).

# Nombre de lignes

```txt
Ce code contient  14 lignes (on enlève les lignes vides)
```

# Retrouver chaque ligne dans le chapitre du cours

```c++
#include "NKWindow/NKWindow.h"
#include "NKWindow/NKMain.h"
```

```txt
ces lignes portent les deux bibliothèques qui contiennent Nkwindowconfig pour gérer la configuration des fenetres ainsi que le point d'entrée portable.
```

```c++
int nkmain(const NkEntryState &state) {
    NkWindowConfig cfg;
    cfg.title  = "Ma fenetre";
    cfg.width  = 1280;
    cfg.height = 720;
```

```txt
ces lignes permettent de déccrire la fenetre,c'est-à-dire de donner ses différentes caractéristiques(la taille,la hauteur,la largeur,etc).
```

```c++
NkWindow window(cfg);
    if (!window.IsOpen()) {
        
        logger.Error("[app] creation fenetre echouee");
        return -1;
    }
```

```txt
ces lignes constituent la création de la fenetre et affichent un message d'erreur dans le cas ou la création échoue.
```

```c++
while (window.IsOpen()) { /* les evenements arrivent ici */ }
    return 0;
}
```

```txt
Ici on a la boucle principale,qui gère les évènements.
```
