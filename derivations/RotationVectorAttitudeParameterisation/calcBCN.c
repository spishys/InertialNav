float t2 = bcn_pd-pd;
float t3 = bcn_pe-pe;
float t4 = bcn_pn-pn;
float t5 = t2*t2;
float t6 = t3*t3;
float t7 = t4*t4;
float t8 = t5+t6+t7;
float t9 = 1.0/sqrt(t8);
float t10 = P[8][8]*t2*t9;
float t11 = P[7][8]*t3*t9;
float t12 = P[6][8]*t4*t9;
float t13 = t10+t11+t12;
float t14 = t2*t9*t13;
float t15 = P[8][7]*t2*t9;
float t16 = P[7][7]*t3*t9;
float t17 = P[6][7]*t4*t9;
float t18 = t15+t16+t17;
float t19 = t3*t9*t18;
float t20 = P[8][6]*t2*t9;
float t21 = P[7][6]*t3*t9;
float t22 = P[6][6]*t4*t9;
float t23 = t20+t21+t22;
float t24 = t4*t9*t23;
float t25 = R_BCN+t14+t19+t24;
float t26 = 1.0/t25;
Kfusion[0] = -t26*(P[0][6]*t4*t9+P[0][7]*t3*t9+P[0][8]*t2*t9);
Kfusion[1] = -t26*(P[1][6]*t4*t9+P[1][7]*t3*t9+P[1][8]*t2*t9);
Kfusion[2] = -t26*(P[2][6]*t4*t9+P[2][7]*t3*t9+P[2][8]*t2*t9);
Kfusion[3] = -t26*(P[3][6]*t4*t9+P[3][7]*t3*t9+P[3][8]*t2*t9);
Kfusion[4] = -t26*(P[4][6]*t4*t9+P[4][7]*t3*t9+P[4][8]*t2*t9);
Kfusion[5] = -t26*(P[5][6]*t4*t9+P[5][7]*t3*t9+P[5][8]*t2*t9);
Kfusion[6] = -t26*(t22+P[6][7]*t3*t9+P[6][8]*t2*t9);
H_BCN[6] = -t4*t9;
Kfusion[7] = -t26*(t16+P[7][6]*t4*t9+P[7][8]*t2*t9);
H_BCN[7] = -t3*t9;
Kfusion[8] = -t26*(t10+P[8][6]*t4*t9+P[8][7]*t3*t9);
H_BCN[8] = -t2*t9;
Kfusion[9] = -t26*(P[9][6]*t4*t9+P[9][7]*t3*t9+P[9][8]*t2*t9);
Kfusion[10] = -t26*(P[10][6]*t4*t9+P[10][7]*t3*t9+P[10][8]*t2*t9);
Kfusion[11] = -t26*(P[11][6]*t4*t9+P[11][7]*t3*t9+P[11][8]*t2*t9);
Kfusion[12] = -t26*(P[12][6]*t4*t9+P[12][7]*t3*t9+P[12][8]*t2*t9);
Kfusion[13] = -t26*(P[13][6]*t4*t9+P[13][7]*t3*t9+P[13][8]*t2*t9);
Kfusion[14] = -t26*(P[14][6]*t4*t9+P[14][7]*t3*t9+P[14][8]*t2*t9);
Kfusion[15] = -t26*(P[15][6]*t4*t9+P[15][7]*t3*t9+P[15][8]*t2*t9);
Kfusion[16] = -t26*(P[16][6]*t4*t9+P[16][7]*t3*t9+P[16][8]*t2*t9);
Kfusion[17] = -t26*(P[17][6]*t4*t9+P[17][7]*t3*t9+P[17][8]*t2*t9);
Kfusion[18] = -t26*(P[18][6]*t4*t9+P[18][7]*t3*t9+P[18][8]*t2*t9);
Kfusion[19] = -t26*(P[19][6]*t4*t9+P[19][7]*t3*t9+P[19][8]*t2*t9);
Kfusion[20] = -t26*(P[20][6]*t4*t9+P[20][7]*t3*t9+P[20][8]*t2*t9);
Kfusion[21] = -t26*(P[21][6]*t4*t9+P[21][7]*t3*t9+P[21][8]*t2*t9);
Kfusion[22] = -t26*(P[22][6]*t4*t9+P[22][7]*t3*t9+P[22][8]*t2*t9);
Kfusion[23] = -t26*(P[23][6]*t4*t9+P[23][7]*t3*t9+P[23][8]*t2*t9);