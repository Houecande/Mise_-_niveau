# Exercices C++ — Mise à niveau

Ce dépôt regroupe plusieurs exercices de programmation en C++, organisés par
travaux pratiques (TP). Chaque fichier source est un programme indépendant et
possède son propre point d'entrée `main`.

## Contenu du dépôt

| Dossier | Fichier | Sujet |
| --- | --- | --- |
| `TP1` | `question1.cpp` | Déterminer si une année est bissextile. |
| `TP1` | `question2.cpp` | Déterminer si un mois (numéroté de 1 à 12) compte 31 jours. |
| `TP1` | `question3.cpp` | Lire les temps des participants et afficher le meilleur temps. Le dossard `0` termine la saisie. |
| `TP2` | `question1.cpp` | Rechercher le meilleur temps en refusant les dossards négatifs. |
| `TP2` | `question2.cpp` | Afficher les premier et deuxième meilleurs temps saisis. |
| `TP2` | `question3.cpp` | Jeu de Mastermind : trouver une combinaison de cinq chiffres en dix essais. |
| `TP3` | `mastermind.cpp` | Vérifier la validité d'une date et calculer le lendemain. Le nom du fichier ne reflète pas le sujet actuellement implémenté. |
| `TP4` | `IPv4_IPv6.cpp` | Présenter des informations de base sur une adresse IPv4 et une adresse IPv6. |
| `TP12` | `IPv4.cpp` | Vérifier les octets d'une adresse IPv4 et afficher sa classe ainsi que des informations réseau. |

## Prérequis

- Un compilateur C++ disponible dans le `PATH`, par exemple `g++` (MinGW sous
  Windows).
- Un terminal ou un environnement de développement tel que Visual Studio Code.

Les programmes utilisent la bibliothèque standard C++. Le Mastermind utilise
également les fonctions pseudo-aléatoires de `<cstdlib>` et `<ctime>`.

## Compiler et exécuter

Les fichiers doivent être compilés **séparément** : ils définissent chacun
leur propre fonction `main`. Depuis la racine du dépôt, par exemple avec
PowerShell et MinGW :

```powershell
g++ -std=c++11 .\TP1\question1.cpp -o .\TP1\question1.exe
.\TP1\question1.exe
```

Remplacez le chemin source et le nom de l'exécutable pour compiler un autre
exercice. Par exemple, pour le programme de dates :

```powershell
g++ -std=c++11 .\TP3\mastermind.cpp -o .\TP3\dates.exe
.\TP3\dates.exe
```

## Saisie des données

Les programmes sont interactifs et attendent les données indiquées à l'écran.
Quelques formats attendus :

- Dates : jour, mois et année séparés par des espaces, par exemple `31 12 2025`.
- Analyse IPv4 : quatre nombres de `0` à `255` séparés par des espaces.
- Analyse IPv6 dans `TP4/IPv4_IPv6.cpp` : une adresse IPv6 écrite sous forme
  textuelle, par exemple `::1` ou `2001:db8::1`.
- Résultats sportifs : saisir un dossard puis son temps ; saisir `0` comme
  dossard pour terminer les programmes qui proposent cette option.
- Mastermind : saisir cinq chiffres compris entre `1` et `9`.

## Remarques

- `TP4/IPv4_IPv6.cpp` affiche des informations générales pour IPv6 ; il ne
  valide pas complètement la syntaxe de l'adresse.
- Les informations réseau des exercices IPv4 reposent sur le classement
  historique par classes et des masques par défaut. Elles ne remplacent pas le
  calcul d'un sous-réseau CIDR.
- Le dossier `TP1/build/Debug` contient des éléments de compilation préexistants ;
  les commandes ci-dessus produisent un exécutable à côté du fichier source.