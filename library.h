#ifndef LIBRARY_H
#define LIBRARY_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct song Song;
typedef struct snode SNode;
typedef struct artist Artist;


struct song {
    Artist *artist;
    char *title;
    char *path;
    int index;
};

struct snode {
    struct snode *next, *prev;
    Song *song;
};
struct artist {
    char *name;
    struct artist *next;
    SNode *head, *tail;
};
Artist *find_artist(char *name);
void add_song(char *artist, char *title, char *path);
void initialize();
void status();

#endif


