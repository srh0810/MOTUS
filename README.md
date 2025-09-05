# README - Jeu de Motus

## Présentation de l'Application
Le jeu de Motus est un jeu dans lequel les joueurs doivent deviner un mot en un nombre limité d'essais. Cette implémentation a été développée en C++ avec Qt/QML.

**Caractéristiques principales:**
- Interface graphique simple
- Dictionnaire de mots français
- Support de mots de différentes longueurs (de 3 à 8 lettres)
- Système d'indices par couleur (vert, orange, gris)
- Fonction d'aide pour révéler des lettres aléatoires
- Chronomètre pour mesurer le temps de jeu

## Structure du Projet
L'application est structurée selon le modèle suivant:
Jeu_motus/
├── CMakeLists.txt # Configuration de compilation
├── main.cpp # Point d'entrée du programme
├── game.h/cpp # Logique principale du jeu (Contrôleur)
├── dictionary.h/cpp # Gestionnaire du dictionnaire (Modèle)
├── timer.h/cpp # Gestion du chronomètre
├── Main.qml # Composant QML principal
├── HomeScreen.qml # Écran d'accueil
├── GameScreen.qml # Interface de jeu
└── dictionnaire.txt # Base de données de mots français


## Classes Principales

### Game (game.h/cpp)
Cette classe est le cœur du jeu, gérant toute la logique de gameplay:

**Fonctionnalités:**
- Initialisation du jeu: Mise en place d'une nouvelle partie, sélection d'un mot aléatoire
- Vérification des tentatives: Analyse des propositions du joueur et attribution des couleurs
- État du jeu: Suivi des tentatives, victoire/défaite, score
- Gestion du clavier virtuel: Mise à jour de l'état des touches
- Fonctionnalités d'aide: Révélation de lettres aléatoires

**Méthodes clés:**
- `startNewGame()`: Initialise une nouvelle partie
- `checkGuess()`: Évalue une tentative et retourne le statut de chaque lettre
- `keyPressed()`/`enterPressed()`/`backspacePressed()`: Gère les entrées utilisateur
- `revealRandomLetter()`: Fonction d'aide pour révéler une lettre

### Dictionary (dictionary.h/cpp)
Cette classe gère le dictionnaire de mots:
- Chargement du fichier de dictionnaire
- Filtrage par longueur de mot
- Vérification de l'existence d'un mot

### Timer (timer.h/cpp)
Gère le chronomètre de jeu:
- Démarrage/arrêt/réinitialisation du chronomètre
- Conversion et formatage du temps écoulé

## Interface Utilisateur
L'interface utilisateur est développée en QML et comprend:

**HomeScreen.qml:**
- Menu principal avec options pour démarrer une nouvelle partie, consulter les règles ou quitter

**GameScreen.qml:**
- Grille de jeu affichant les tentatives précédentes et leurs résultats
- Clavier virtuel avec mise à jour des couleurs selon les lettres déjà essayées
- Sélecteur de longueur de mot
- Bandeau d'aide pour révéler une lettre
- Affichage du chronomètre
- Bouton ? pour consulter les règles

## Règles du Jeu
- La première lettre du mot est donnée
- Le joueur doit deviner le mot en 6 tentatives maximum
- Après chaque tentative, les lettres sont colorées:
  - **Vert:** La lettre est correcte et bien placée
  - **Orange:** La lettre est dans le mot mais mal placée
  - **Gris:** La lettre n'est pas dans le mot
- Les mots peuvent contenir des lettres qui se répètent
- Les accents ne sont pas pris en compte

