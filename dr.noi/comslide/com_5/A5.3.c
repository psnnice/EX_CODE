#include <stdio.h>
int main()
{
    int substance,atom,type,i=0;
    char c[7]={"carbon"},n[9]={"nitrogen"},status[2][7]={"gas","solid","liquid"};
    printf("Substance type \n");
    printf("1.Carbon \n");
    printf("2.nitrogen \n");
    printf("Choose substance type : ");
    scanf("%d",&substance);
    switch (substance)
    {
    case 1:
        printf("\nNumber of atom (5 atom , 6 atom ): \n");
        printf("have hydrogen is component press 0\n");
        scanf("%d",&atom);
        switch (atom)
        {
        case 5:
            i=0;
            type=1;
            goto pp;
        case 6:
            i=2;
            type=2;
            goto pp;
        case 0:
            i=0;
            type=5;
            goto spe;
        default:
            goto er;
        }
    case 2:
        printf("\nNumber of atom (4 atom , 6 atom ): \n");
        scanf("%d",&atom);
        switch (atom)
        {
        case 4:
            i=1;
            type=4;
            goto pp1;
        case 6:
            i=0;
            type=3;
            goto pp1;
        default:
            goto er;
        }
    default:
        er:
        printf("error its not in list");
        break;
    spe:
    printf("Substance %s have hydrogen is component 5 atom %s is type %d",c,status[i],type);
    break;
    pp1:
    printf("Substance %s %d atom %s is type %d",n,atom,status[i],type);
    break;
    pp:
    printf("Substance %s %d atom %s is type %d",c,atom,status[i],type);
    break;
    }
    return 0;
}
