#ifndef ACTION_H
#define ACTION_H
#include "battle_c.h"

BC_ShootResult Shooting(BC_Connection *conn,double angle);
void moveAction(BC_Connection *conn,double x,double y);

#endif //ACTION_H
