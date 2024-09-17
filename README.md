# 42-Cursus

Ce repo contient tous les projets du tronc commun de l'école 42, dans l'ordre par lequel je les ai réalisés.  
Les sujets de chaque projet se trouvent dans les dossiers correspondants.

Vous trouverez ci-dessous un court résumé des projets, en plus de leurs dates de commencement et de fin, ainsi qu'une estimation du nombre d'heures de travail effectuées. Les heures de travail approximatives ne sont pas uniquement le temps passé à écrire le code, mais également le temps nécessaire pour chercher et lire de la documentation, discuter des interprétations et choix d'implémentations avec mes collègues, et de tester le tout.

> [!NOTE]  
> Les projets en C se doivent de strictement suivre la [norme de 42](https://smallpdf.com/file#s=102dad73-62e5-40ec-8122-5b87b83ff6fc), sans quoi la note est automatiquement 0.

## [00 - libft](https://github.com/Alexioos95/42-Cursus/tree/main/00_libft)

Création de ma propre librairie C, contenant principalement des reproductions des fonctions de la glibc.  
Les "bonus", sont des fonctions permettant l'utilisation de listes chaînées.

Utilisez ```make``` pour compiler la librairie en ```libft.a```. (```make bonus``` pour le faire avec ces derniers.)

Commencé le Lundi 02 septembre 2024, fini le Mardi 11 Septembre 2024 (Environ 70 heures de travail).
 <!-- , rendu le ?.  -->

## [01 - ft_printf](https://github.com/Alexioos95/42-Cursus/tree/main/01_ft_printf)

Reproduction partielle de la fonction ```printf``` de la glibc, gérant les formats suivants : ```%c```, ```%s```, ```%d```, ```%i```, ```%u```, ```%p```, ```%x```, ```%X``` et ```%%```.

Utilisez ```make``` pour compiler la librairie en ```libftprintf.a```.

Commencé le Mardi 11 Septembre 2024, fini le Mardi 17 Septembre 2024 (Environ 30 heures de travail).
 <!-- , rendu ?.  -->

## 02 - born2beroot

Installation et configuration d'une machine virtuelle Debian 11, sous politique de sécurité stricte.  
en.subject : https://smallpdf.com/fr/file#s=5a9178ba-c3b4-4516-886f-7af9d29a3b0e

<!-- Commencé le ?, rendu ?. (Environ ?h de travail) -->

## [03 - get_next_line](https://github.com/Alexioos95/42-Cursus/tree/main/03_get_next_line)

Programme lisant la ligne suivante d'un fichier. (L'utiliser sur le même fichier plusieurs fois permet de le lire, jusqu'à sa fin.)

Compilez ```get_next_line.c``` et ```get_next_line_utils.c``` pour afficher la première ligne du fichier pointé (en chemin relatif présent) dans la fonction ```main``` de ```get_next_line.c```. Faites le avec ```get_next_line_bonus.c``` et ```get_next_line_utils_bonus.c``` pour pouvoir afficher celles de plusieurs fichiers en même temps.

Ajouter le flag ```-D BUFFER_SIZE=n``` lors de la compilation permet de modifier la taille du buffer utilisé par la fonction ```read``` à ```n```. (La taille du buffer a été mise à 42 par défaut.)

<!-- Commencé le ?, rendu ?. (Environ ?h de travail) -->

## [04 - push_swap](https://github.com/Alexioos95/42-Cursus/tree/main/04_push_swap)

Programme triant (en ordre croissant) une pile contenant les nombres passés en argument.

Le programme ne peut utiliser que certaines opérations, qui sont écrites sur le terminal une fois exécuté.  
Veuillez lire le sujet présent dans le dossier correspondant au projet pour plus de détails.

Mon interprétation du projet utilise un algorithme ```LSD Radix```, en binaire.

Utilisez ```make``` pour compiler le programme en un exécutable ```push_swap```.  
Exécutez ensuite ```push_swap```, suivi des nombres à trier.

<!-- Commencé le ?, rendu ?. (Environ ?h de travail) -->

## [05 - so_long](https://github.com/Alexioos95/42-Cursus/tree/main/05_so_long)

Simple jeu 2D, réalisé avec la MiniLibX, la bibliothèque graphique maison de 42.  
Le but du jeu est de ramasser tous les collectibles dans le labyrinthe, avant de sortir par la porte.

Le bonus de ce projet nous permet de laisser libre cours à notre imagination, et d'utiliser et faire tout ce que l'on veut. Je suis donc parti sur l'idée d'un clone de pac-man !  
Les fonctionnalités du jeu étant choisies par moi-même, vous les trouverez détaillées dans le dossier du projet.

Utilisez ```make``` pour compiler le programme en un exécutable ```so_long```. (```make bonus``` pour avoir le véritable jeu.) Exécutez ensuite ```so_long```, suivi du chemin relatif d'une carte au format ```.ber```. (Voir le sujet pour les précisions liées à la création de cartes.) Le dossier ```maps``` en contient quelques-unes pour tester le programme, et le dossier ```bonus/maps_bonus``` en contient d'autres, faîtes spécialement pour le bonus.

<!-- Commencé le ?, rendu ?. (Environ ?h de travail) -->
## [06 - pipex](https://github.com/Alexioos95/42-Cursus/tree/main/06_pipex)

Reproduction du fonctionnement du ```pipe (|)``` du système Unix.

Utilisez ```make``` pour compiler le programme en un exécutable ```pipex```.  
Donnez à l'executable des arguments comme ceci : "./pipex ```Infile``` ```Command 1``` ```Command 2``` ```Outfile```".  
Le bonus permet d'utiliser plusieurs pipes, ainsi que le ```here_doc (<<)```.

<!-- Commencé le ?, rendu ?. (Environ ?h de travail) -->

## [07 - philosophers](https://github.com/Alexioos95/42-Cursus/tree/main/07_philosophers)

Programme reprenant le problème des "Dining Philosophers", avec des ```threads``` et des ```mutexs```.

Utilisez ```make``` pour compiler le programme en un exécutable ```philo```.  
Exécutez ensuite ```philo```, comme ceci : "./philo ```"Nombre_de_philo"``` ```"Temps_de_vie_sans_manger"``` ```"Temps_nécessaire_pour_manger"``` ```"Temps_nécessaire_pour_dormir"``` ```"(Optionnel)_Nombre_de_repas_pour_terminer_la_simulation"```".

Mon interprétation du projet utilise la solution des ```pairs/impairs```, en priorisant les impairs au tout début de la simulation. Je fais, en plus, attendre chaque thread une petite portion de leur ```Temps_de_vie_sans_manger``` après qu'ils aient dormis, afin d'éviter un potentiel vol de fourchette.

<!-- Commencé le ?, rendu ?. (Environ ?h de travail) -->

## [08 - minishell](https://github.com/Alexioos95/42-Cursus/tree/main/08_minishell)

Reproduction partielle d'un ```shell bash```.

Utilisez ```make``` pour compiler le programme en un exécutable ```minishell```.  
Veuillez lire le sujet pour tous les détails.

Réalisé en duo avec [Eli Ewu](https://github.com/Uweile).  
Il s'est occupé du lexical analyser ainsi que de l'implémentation de l'exécuteur des commandes et redirections, tandis que j'ai fait tout le reste. (Boucle shell, readline, heredoc, expand, built-ins, et signaux.) Vous pouvez voir le repo utilisé durant le développement du projet [ici](https://github.com/Alexioos95/ms).

<!-- Commencé le ?, rendu ?. (Environ ?h de travail) -->

## 09 - netpractice

Petits exercices afin d'apprendre comment l'adressage IP fonctionne.

<!-- Commencé le ?, rendu ?. (Environ ?h de travail) -->
## 10 - cub3d

Reproduction du système de raycasting de Wolfenstein 3D, avec la MiniLibX.  
en.subject : https://smallpdf.com/fr/file#s=76d950c0-e29b-498e-bced-f6e125c5d4cb

<!-- Commencé le ?, rendu ?. (Environ ?h de travail) -->

## [11 - piscine cpp](https://github.com/Alexioos95/42-Cursus/tree/main/11_cpp)

Piscine de petits exercices en C++, afin de découvrir la programmation orientée objet.

<!-- Commencé le ?, rendu ?. (Environ ?h de travail) -->

## [12 - webserv](https://github.com/Alexioos95/42-Cursus/tree/main/12_webserv)

Développement d'un serveur web non bloquant via multiplexage en C++.

Utilisez ```make``` pour compiler le programme en un exécutable ```webserv```.  
Veuillez lire le readme du dossier pour les détails sur le fichier de configuration.

<!-- Commencé le ?, rendu ?. (Environ ?h de travail) -->

## [13 - inception](https://github.com/Alexioos95/42-Cursus/tree/main/13_inception)

Découverte de Docker, et setup d'un site Wordpress, hébergé localement sur Nginx via ```docker compose```.

<!-- Commencé le ?, rendu ?. (Environ ?h de travail) -->

## 14 - ft_transcendance

Single-page web application d'un jeu Pong.

<!-- Commencé le ?, rendu ?. (Environ ?h de travail) -->
