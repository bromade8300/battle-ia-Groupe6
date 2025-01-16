#include "Action.h"
#include "battle_c.h"

BC_ShootResult Shooting(BC_Connection *conn,double angle) {
    return bc_shoot(conn,angle);
}

void moveAction(BC_Connection *conn,double x,double y) {
  bc_set_speed(conn,x,y,0);
}
