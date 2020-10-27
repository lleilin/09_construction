#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "construction.h"

struct athlete* new_athlete(char* new_name, char* new_team, int new_height, int new_weight) {
  struct athlete* person;
  person = malloc(sizeof(struct athlete));
  strcpy(person->name, new_name);
  strcpy(person->team, new_team);
  person->height = new_height;
  person->weight = new_weight;
  return person;
}

void remove_athlete(struct athlete* person) {
  free(person);
};

void change_team(struct athlete* person, char* new_team) {
  strcpy(person->team, new_team);
};

void change_weight(struct athlete* person, int new_weight) {
  person->weight = new_weight;
};

void print_athlete(struct athlete* person) {
  printf("Name: %s\n", person->name);
  printf("Team: %s\n", person->team);
  printf("Weight: %d lb\n", person->weight);
  printf("Height: %d in\n\n", person->height);
};
