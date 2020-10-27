#include <stdio.h>
#include <stdlib.h>
#include "construction.h"

int main() {
  struct athlete* lebronjames = new_athlete("Lebron James", "Cavaliers", 81, 250);
  print_athlete(lebronjames);
  printf("Lebron to Lakers\n");
  change_team(lebronjames, "Lakers");
  print_athlete(lebronjames);
  printf("Lebron lost weight\n");
  change_weight(lebronjames, 240);
  print_athlete(lebronjames);

  struct athlete* anthonydavis = new_athlete("Anthony Davis", "Lakers", 82, 254);
  print_athlete(anthonydavis);
}
