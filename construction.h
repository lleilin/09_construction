#ifndef CONSTRUCTION
#define CONSTRUCTION

struct athlete {
  char name[128];
  char team[128];
  int height;
  int weight;
};

struct athlete* new_athlete(char *new_name, char *new_team, int new_height, int new_weight);
void remove_athlete(struct athlete* person);
void change_team(struct athlete* person, char* new_team);
void change_weight(struct athlete* person, int new_weight);
void print_athlete(struct athlete* person);

#endif
