// Heights are times 20.  We divide by 2 to get integer heights*10
// Index is pressure - MAX_PRESSURE (ie pressure - 10140) giving 0.1 mbar steps
const int16_t AltituteMap[] PROGMEM =
{
	-125, // 1014mbar = -6.24m
	-108, // 1013.9mbar = -5.41m
	-92, // 1013.8mbar = -4.58m
	-75, // 1013.7mbar = -3.75m
	-58, // 1013.6mbar = -2.91m
	-42, // 1013.5mbar = -2.08m
	-25, // 1013.4mbar = -1.25m
	-8, // 1013.3mbar = -0.42m
	8, // 1013.2mbar = 0.42m
	25, // 1013.1mbar = 1.25m
	42, // 1013mbar = 2.08m
	58, // 1012.9mbar = 2.91m
	75, // 1012.8mbar = 3.75m
	92, // 1012.7mbar = 4.58m
	108, // 1012.6mbar = 5.41m
	125, // 1012.5mbar = 6.25m
	142, // 1012.4mbar = 7.08m
	158, // 1012.3mbar = 7.91m
	175, // 1012.2mbar = 8.74m
	192, // 1012.1mbar = 9.58m
	208, // 1012mbar = 10.41m
	225, // 1011.9mbar = 11.24m
	242, // 1011.8mbar = 12.08m
	258, // 1011.7mbar = 12.91m
	275, // 1011.6mbar = 13.74m
	292, // 1011.5mbar = 14.58m
	308, // 1011.4mbar = 15.41m
	325, // 1011.3mbar = 16.24m
	342, // 1011.2mbar = 17.08m
	358, // 1011.1mbar = 17.91m
	375, // 1011mbar = 18.75m
	392, // 1010.9mbar = 19.58m
	408, // 1010.8mbar = 20.41m
	425, // 1010.7mbar = 21.25m
	442, // 1010.6mbar = 22.08m
	458, // 1010.5mbar = 22.92m
	475, // 1010.4mbar = 23.75m
	492, // 1010.3mbar = 24.59m
	508, // 1010.2mbar = 25.42m
	525, // 1010.1mbar = 26.25m
	542, // 1010mbar = 27.09m
	558, // 1009.9mbar = 27.92m
	575, // 1009.8mbar = 28.76m
	592, // 1009.7mbar = 29.59m
	609, // 1009.6mbar = 30.43m
	625, // 1009.5mbar = 31.26m
	642, // 1009.4mbar = 32.1m
	659, // 1009.3mbar = 32.93m
	675, // 1009.2mbar = 33.77m
	692, // 1009.1mbar = 34.6m
	709, // 1009mbar = 35.44m
	725, // 1008.9mbar = 36.27m
	742, // 1008.8mbar = 37.11m
	759, // 1008.7mbar = 37.94m
	776, // 1008.6mbar = 38.78m
	792, // 1008.5mbar = 39.62m
	809, // 1008.4mbar = 40.45m
	826, // 1008.3mbar = 41.29m
	842, // 1008.2mbar = 42.12m
	859, // 1008.1mbar = 42.96m
	876, // 1008mbar = 43.79m
	893, // 1007.9mbar = 44.63m
	909, // 1007.8mbar = 45.47m
	926, // 1007.7mbar = 46.3m
	943, // 1007.6mbar = 47.14m
	959, // 1007.5mbar = 47.97m
	976, // 1007.4mbar = 48.81m
	993, // 1007.3mbar = 49.65m
	1010, // 1007.2mbar = 50.48m
	1026, // 1007.1mbar = 51.32m
	1043, // 1007mbar = 52.16m
	1060, // 1006.9mbar = 52.99m
	1077, // 1006.8mbar = 53.83m
	1093, // 1006.7mbar = 54.67m
	1110, // 1006.6mbar = 55.5m
	1127, // 1006.5mbar = 56.34m
	1144, // 1006.4mbar = 57.18m
	1160, // 1006.3mbar = 58.01m
	1177, // 1006.2mbar = 58.85m
	1194, // 1006.1mbar = 59.69m
	1211, // 1006mbar = 60.53m
	1227, // 1005.9mbar = 61.36m
	1244, // 1005.8mbar = 62.2m
	1261, // 1005.7mbar = 63.04m
	1278, // 1005.6mbar = 63.88m
	1294, // 1005.5mbar = 64.71m
	1311, // 1005.4mbar = 65.55m
	1328, // 1005.3mbar = 66.39m
	1345, // 1005.2mbar = 67.23m
	1361, // 1005.1mbar = 68.06m
	1378, // 1005mbar = 68.9m
	1395, // 1004.9mbar = 69.74m
	1412, // 1004.8mbar = 70.58m
	1428, // 1004.7mbar = 71.42m
	1445, // 1004.6mbar = 72.25m
	1462, // 1004.5mbar = 73.09m
	1479, // 1004.4mbar = 73.93m
	1495, // 1004.3mbar = 74.77m
	1512, // 1004.2mbar = 75.61m
	1529, // 1004.1mbar = 76.45m
	1546, // 1004mbar = 77.28m
	1562, // 1003.9mbar = 78.12m
	1579, // 1003.8mbar = 78.96m
	1596, // 1003.7mbar = 79.8m
	1613, // 1003.6mbar = 80.64m
	1630, // 1003.5mbar = 81.48m
	1646, // 1003.4mbar = 82.32m
	1663, // 1003.3mbar = 83.16m
	1680, // 1003.2mbar = 84m
	1697, // 1003.1mbar = 84.84m
	1713, // 1003mbar = 85.67m
	1730, // 1002.9mbar = 86.51m
	1747, // 1002.8mbar = 87.35m
	1764, // 1002.7mbar = 88.19m
	1781, // 1002.6mbar = 89.03m
	1797, // 1002.5mbar = 89.87m
	1814, // 1002.4mbar = 90.71m
	1831, // 1002.3mbar = 91.55m
	1848, // 1002.2mbar = 92.39m
	1865, // 1002.1mbar = 93.23m
	1881, // 1002mbar = 94.07m
	1898, // 1001.9mbar = 94.91m
	1915, // 1001.8mbar = 95.75m
	1932, // 1001.7mbar = 96.59m
	1949, // 1001.6mbar = 97.43m
	1965, // 1001.5mbar = 98.27m
	1982, // 1001.4mbar = 99.11m
	1999, // 1001.3mbar = 99.95m
	2016, // 1001.2mbar = 100.79m
	2033, // 1001.1mbar = 101.63m
	2049, // 1001mbar = 102.47m
	2066, // 1000.9mbar = 103.31m
	2083, // 1000.8mbar = 104.16m
	2100, // 1000.7mbar = 105m
	2117, // 1000.6mbar = 105.84m
	2134, // 1000.5mbar = 106.68m
	2150, // 1000.4mbar = 107.52m
	2167, // 1000.3mbar = 108.36m
	2184, // 1000.2mbar = 109.2m
	2201, // 1000.1mbar = 110.04m
	2218, // 1000mbar = 110.88m
	2235, // 999.9mbar = 111.73m
	2251, // 999.8mbar = 112.57m
	2268, // 999.7mbar = 113.41m
	2285, // 999.6mbar = 114.25m
	2302, // 999.5mbar = 115.09m
	2319, // 999.4mbar = 115.93m
	2336, // 999.3mbar = 116.78m
	2352, // 999.2mbar = 117.62m
	2369, // 999.1mbar = 118.46m
	2386, // 999mbar = 119.3m
	2403, // 998.9mbar = 120.14m
	2420, // 998.8mbar = 120.99m
	2437, // 998.7mbar = 121.83m
	2453, // 998.6mbar = 122.67m
	2470, // 998.5mbar = 123.51m
	2487, // 998.4mbar = 124.35m
	2504, // 998.3mbar = 125.2m
	2521, // 998.2mbar = 126.04m
	2538, // 998.1mbar = 126.88m
	2554, // 998mbar = 127.72m
	2571, // 997.9mbar = 128.57m
	2588, // 997.8mbar = 129.41m
	2605, // 997.7mbar = 130.25m
	2622, // 997.6mbar = 131.1m
	2639, // 997.5mbar = 131.94m
	2656, // 997.4mbar = 132.78m
	2673, // 997.3mbar = 133.63m
	2689, // 997.2mbar = 134.47m
	2706, // 997.1mbar = 135.31m
	2723, // 997mbar = 136.15m
	2740, // 996.9mbar = 137m
	2757, // 996.8mbar = 137.84m
	2774, // 996.7mbar = 138.69m
	2791, // 996.6mbar = 139.53m
	2807, // 996.5mbar = 140.37m
	2824, // 996.4mbar = 141.22m
	2841, // 996.3mbar = 142.06m
	2858, // 996.2mbar = 142.9m
	2875, // 996.1mbar = 143.75m
	2892, // 996mbar = 144.59m
	2909, // 995.9mbar = 145.44m
	2926, // 995.8mbar = 146.28m
	2942, // 995.7mbar = 147.12m
	2959, // 995.6mbar = 147.97m
	2976, // 995.5mbar = 148.81m
	2993, // 995.4mbar = 149.66m
	3010, // 995.3mbar = 150.5m
	3027, // 995.2mbar = 151.35m
	3044, // 995.1mbar = 152.19m
	3061, // 995mbar = 153.04m
	3078, // 994.9mbar = 153.88m
	3095, // 994.8mbar = 154.73m
	3111, // 994.7mbar = 155.57m
	3128, // 994.6mbar = 156.42m
	3145, // 994.5mbar = 157.26m
	3162, // 994.4mbar = 158.11m
	3179, // 994.3mbar = 158.95m
	3196, // 994.2mbar = 159.8m
	3213, // 994.1mbar = 160.64m
	3230, // 994mbar = 161.49m
	3247, // 993.9mbar = 162.33m
	3264, // 993.8mbar = 163.18m
	3280, // 993.7mbar = 164.02m
	3297, // 993.6mbar = 164.87m
	3314, // 993.5mbar = 165.72m
	3331, // 993.4mbar = 166.56m
	3348, // 993.3mbar = 167.41m
	3365, // 993.2mbar = 168.25m
	3382, // 993.1mbar = 169.1m
	3399, // 993mbar = 169.95m
	3416, // 992.9mbar = 170.79m
	3433, // 992.8mbar = 171.64m
	3450, // 992.7mbar = 172.48m
	3467, // 992.6mbar = 173.33m
	3484, // 992.5mbar = 174.18m
	3500, // 992.4mbar = 175.02m
	3517, // 992.3mbar = 175.87m
	3534, // 992.2mbar = 176.72m
	3551, // 992.1mbar = 177.56m
	3568, // 992mbar = 178.41m
	3585, // 991.9mbar = 179.26m
	3602, // 991.8mbar = 180.1m
	3619, // 991.7mbar = 180.95m
	3636, // 991.6mbar = 181.8m
	3653, // 991.5mbar = 182.65m
	3670, // 991.4mbar = 183.49m
	3687, // 991.3mbar = 184.34m
	3704, // 991.2mbar = 185.19m
	3721, // 991.1mbar = 186.03m
	3738, // 991mbar = 186.88m
	3755, // 990.9mbar = 187.73m
	3772, // 990.8mbar = 188.58m
	3788, // 990.7mbar = 189.42m
	3805, // 990.6mbar = 190.27m
	3822, // 990.5mbar = 191.12m
	3839, // 990.4mbar = 191.97m
	3856, // 990.3mbar = 192.82m
	3873, // 990.2mbar = 193.66m
	3890, // 990.1mbar = 194.51m
	3907, // 990mbar = 195.36m
	3924, // 989.9mbar = 196.21m
	3941, // 989.8mbar = 197.06m
	3958, // 989.7mbar = 197.91m
	3975, // 989.6mbar = 198.75m
	3992, // 989.5mbar = 199.6m
	4009, // 989.4mbar = 200.45m
	4026, // 989.3mbar = 201.3m
	4043, // 989.2mbar = 202.15m
	4060, // 989.1mbar = 203m
	4077, // 989mbar = 203.85m
	4094, // 988.9mbar = 204.7m
	4111, // 988.8mbar = 205.54m
	4128, // 988.7mbar = 206.39m
	4145, // 988.6mbar = 207.24m
	4162, // 988.5mbar = 208.09m
	4179, // 988.4mbar = 208.94m
	4196, // 988.3mbar = 209.79m
	4213, // 988.2mbar = 210.64m
	4230, // 988.1mbar = 211.49m
	4247, // 988mbar = 212.34m
	4264, // 987.9mbar = 213.19m
	4281, // 987.8mbar = 214.04m
	4298, // 987.7mbar = 214.89m
	4315, // 987.6mbar = 215.74m
	4332, // 987.5mbar = 216.59m
	4349, // 987.4mbar = 217.44m
	4366, // 987.3mbar = 218.29m
	4383, // 987.2mbar = 219.14m
	4400, // 987.1mbar = 219.99m
	4417, // 987mbar = 220.84m
	4434, // 986.9mbar = 221.69m
	4451, // 986.8mbar = 222.54m
	4468, // 986.7mbar = 223.39m
	4485, // 986.6mbar = 224.24m
	4502, // 986.5mbar = 225.09m
	4519, // 986.4mbar = 225.94m
	4536, // 986.3mbar = 226.79m
	4553, // 986.2mbar = 227.64m
	4570, // 986.1mbar = 228.49m
	4587, // 986mbar = 229.34m
	4604, // 985.9mbar = 230.2m
	4621, // 985.8mbar = 231.05m
	4638, // 985.7mbar = 231.9m
	4655, // 985.6mbar = 232.75m
	4672, // 985.5mbar = 233.6m
	4689, // 985.4mbar = 234.45m
	4706, // 985.3mbar = 235.3m
	4723, // 985.2mbar = 236.16m
	4740, // 985.1mbar = 237.01m
	4757, // 985mbar = 237.86m
	4774, // 984.9mbar = 238.71m
	4791, // 984.8mbar = 239.56m
	4808, // 984.7mbar = 240.41m
	4825, // 984.6mbar = 241.27m
	4842, // 984.5mbar = 242.12m
	4859, // 984.4mbar = 242.97m
	4876, // 984.3mbar = 243.82m
	4893, // 984.2mbar = 244.67m
	4911, // 984.1mbar = 245.53m
	4928, // 984mbar = 246.38m
	4945, // 983.9mbar = 247.23m
	4962, // 983.8mbar = 248.08m
	4979, // 983.7mbar = 248.94m
	4996, // 983.6mbar = 249.79m
	5013, // 983.5mbar = 250.64m
	5030, // 983.4mbar = 251.49m
	5047, // 983.3mbar = 252.35m
	5064, // 983.2mbar = 253.2m
	5081, // 983.1mbar = 254.05m
	5098, // 983mbar = 254.91m
	5115, // 982.9mbar = 255.76m
	5132, // 982.8mbar = 256.61m
	5149, // 982.7mbar = 257.47m
	5166, // 982.6mbar = 258.32m
	5183, // 982.5mbar = 259.17m
	5201, // 982.4mbar = 260.03m
	5218, // 982.3mbar = 260.88m
	5235, // 982.2mbar = 261.73m
	5252, // 982.1mbar = 262.59m
	5269, // 982mbar = 263.44m
	5286, // 981.9mbar = 264.29m
	5303, // 981.8mbar = 265.15m
	5320, // 981.7mbar = 266m
	5337, // 981.6mbar = 266.86m
	5354, // 981.5mbar = 267.71m
	5371, // 981.4mbar = 268.56m
	5388, // 981.3mbar = 269.42m
	5405, // 981.2mbar = 270.27m
	5423, // 981.1mbar = 271.13m
	5440, // 981mbar = 271.98m
	5457, // 980.9mbar = 272.84m
	5474, // 980.8mbar = 273.69m
	5491, // 980.7mbar = 274.55m
	5508, // 980.6mbar = 275.4m
	5525, // 980.5mbar = 276.26m
	5542, // 980.4mbar = 277.11m
	5559, // 980.3mbar = 277.97m
	5576, // 980.2mbar = 278.82m
	5594, // 980.1mbar = 279.68m
	5611, // 980mbar = 280.53m
	5628, // 979.9mbar = 281.39m
	5645, // 979.8mbar = 282.24m
	5662, // 979.7mbar = 283.1m
	5679, // 979.6mbar = 283.95m
	5696, // 979.5mbar = 284.81m
	5713, // 979.4mbar = 285.66m
	5730, // 979.3mbar = 286.52m
	5748, // 979.2mbar = 287.38m
	5765, // 979.1mbar = 288.23m
	5782, // 979mbar = 289.09m
	5799, // 978.9mbar = 289.94m
	5816, // 978.8mbar = 290.8m
	5833, // 978.7mbar = 291.65m
	5850, // 978.6mbar = 292.51m
	5867, // 978.5mbar = 293.37m
	5884, // 978.4mbar = 294.22m
	5902, // 978.3mbar = 295.08m
	5919, // 978.2mbar = 295.94m
	5936, // 978.1mbar = 296.79m
	5953, // 978mbar = 297.65m
	5970, // 977.9mbar = 298.51m
	5987, // 977.8mbar = 299.36m
	6004, // 977.7mbar = 300.22m
	6022, // 977.6mbar = 301.08m
	6039, // 977.5mbar = 301.93m
	6056, // 977.4mbar = 302.79m
	6073, // 977.3mbar = 303.65m
	6090, // 977.2mbar = 304.5m
	6107, // 977.1mbar = 305.36m
	6124, // 977mbar = 306.22m
	6142, // 976.9mbar = 307.08m
	6159, // 976.8mbar = 307.93m
	6176, // 976.7mbar = 308.79m
	6193, // 976.6mbar = 309.65m
	6210, // 976.5mbar = 310.51m
	6227, // 976.4mbar = 311.36m
	6244, // 976.3mbar = 312.22m
	6262, // 976.2mbar = 313.08m
	6279, // 976.1mbar = 313.94m
	6296, // 976mbar = 314.8m
	6313, // 975.9mbar = 315.65m
	6330, // 975.8mbar = 316.51m
	6347, // 975.7mbar = 317.37m
	6365, // 975.6mbar = 318.23m
	6382, // 975.5mbar = 319.09m
	6399, // 975.4mbar = 319.95m
	6416, // 975.3mbar = 320.8m
	6433, // 975.2mbar = 321.66m
	6450, // 975.1mbar = 322.52m
	6468, // 975mbar = 323.38m
	6485, // 974.9mbar = 324.24m
	6502, // 974.8mbar = 325.1m
	6519, // 974.7mbar = 325.96m
	6536, // 974.6mbar = 326.82m
	6554, // 974.5mbar = 327.68m
	6571, // 974.4mbar = 328.53m
	6588, // 974.3mbar = 329.39m
	6605, // 974.2mbar = 330.25m
	6622, // 974.1mbar = 331.11m
	6639, // 974mbar = 331.97m
	6657, // 973.9mbar = 332.83m
	6674, // 973.8mbar = 333.69m
	6691, // 973.7mbar = 334.55m
	6708, // 973.6mbar = 335.41m
	6725, // 973.5mbar = 336.27m
	6743, // 973.4mbar = 337.13m
	6760, // 973.3mbar = 337.99m
	6777, // 973.2mbar = 338.85m
	6794, // 973.1mbar = 339.71m
	6811, // 973mbar = 340.57m
	6829, // 972.9mbar = 341.43m
	6846, // 972.8mbar = 342.29m
	6863, // 972.7mbar = 343.15m
	6880, // 972.6mbar = 344.01m
	6897, // 972.5mbar = 344.87m
	6915, // 972.4mbar = 345.73m
	6932, // 972.3mbar = 346.59m
	6949, // 972.2mbar = 347.45m
	6966, // 972.1mbar = 348.31m
	6984, // 972mbar = 349.18m
	7001, // 971.9mbar = 350.04m
	7018, // 971.8mbar = 350.9m
	7035, // 971.7mbar = 351.76m
	7052, // 971.6mbar = 352.62m
	7070, // 971.5mbar = 353.48m
	7087, // 971.4mbar = 354.34m
	7104, // 971.3mbar = 355.2m
	7121, // 971.2mbar = 356.07m
	7139, // 971.1mbar = 356.93m
	7156, // 971mbar = 357.79m
	7173, // 970.9mbar = 358.65m
	7190, // 970.8mbar = 359.51m
	7207, // 970.7mbar = 360.37m
	7225, // 970.6mbar = 361.24m
	7242, // 970.5mbar = 362.1m
	7259, // 970.4mbar = 362.96m
	7276, // 970.3mbar = 363.82m
	7294, // 970.2mbar = 364.68m
	7311, // 970.1mbar = 365.55m
	7328, // 970mbar = 366.41m
	7345, // 969.9mbar = 367.27m
	7363, // 969.8mbar = 368.13m
	7380, // 969.7mbar = 369m
	7397, // 969.6mbar = 369.86m
	7414, // 969.5mbar = 370.72m
	7432, // 969.4mbar = 371.58m
	7449, // 969.3mbar = 372.45m
	7466, // 969.2mbar = 373.31m
	7483, // 969.1mbar = 374.17m
	7501, // 969mbar = 375.04m
	7518, // 968.9mbar = 375.9m
	7535, // 968.8mbar = 376.76m
	7552, // 968.7mbar = 377.62m
	7570, // 968.6mbar = 378.49m
	7587, // 968.5mbar = 379.35m
	7604, // 968.4mbar = 380.21m
	7622, // 968.3mbar = 381.08m
	7639, // 968.2mbar = 381.94m
	7656, // 968.1mbar = 382.81m
	7673, // 968mbar = 383.67m
	7691, // 967.9mbar = 384.53m
	7708, // 967.8mbar = 385.4m
	7725, // 967.7mbar = 386.26m
	7743, // 967.6mbar = 387.13m
	7760, // 967.5mbar = 387.99m
	7777, // 967.4mbar = 388.85m
	7794, // 967.3mbar = 389.72m
	7812, // 967.2mbar = 390.58m
	7829, // 967.1mbar = 391.45m
	7846, // 967mbar = 392.31m
	7864, // 966.9mbar = 393.18m
	7881, // 966.8mbar = 394.04m
	7898, // 966.7mbar = 394.9m
	7915, // 966.6mbar = 395.77m
	7933, // 966.5mbar = 396.63m
	7950, // 966.4mbar = 397.5m
	7967, // 966.3mbar = 398.36m
	7985, // 966.2mbar = 399.23m
	8002, // 966.1mbar = 400.09m
	8019, // 966mbar = 400.96m
	8036, // 965.9mbar = 401.82m
	8054, // 965.8mbar = 402.69m
	8071, // 965.7mbar = 403.56m
	8088, // 965.6mbar = 404.42m
	8106, // 965.5mbar = 405.29m
	8123, // 965.4mbar = 406.15m
	8140, // 965.3mbar = 407.02m
	8158, // 965.2mbar = 407.88m
	8175, // 965.1mbar = 408.75m
	8192, // 965mbar = 409.62m
	8210, // 964.9mbar = 410.48m
	8227, // 964.8mbar = 411.35m
	8244, // 964.7mbar = 412.21m
	8262, // 964.6mbar = 413.08m
	8279, // 964.5mbar = 413.95m
	8296, // 964.4mbar = 414.81m
	8314, // 964.3mbar = 415.68m
	8331, // 964.2mbar = 416.55m
	8348, // 964.1mbar = 417.41m
	8366, // 964mbar = 418.28m
	8383, // 963.9mbar = 419.15m
	8400, // 963.8mbar = 420.01m
	8418, // 963.7mbar = 420.88m
	8435, // 963.6mbar = 421.75m
	8452, // 963.5mbar = 422.61m
	8470, // 963.4mbar = 423.48m
	8487, // 963.3mbar = 424.35m
	8504, // 963.2mbar = 425.21m
	8522, // 963.1mbar = 426.08m
	8539, // 963mbar = 426.95m
	8556, // 962.9mbar = 427.82m
	8574, // 962.8mbar = 428.68m
	8591, // 962.7mbar = 429.55m
	8608, // 962.6mbar = 430.42m
	8626, // 962.5mbar = 431.29m
	8643, // 962.4mbar = 432.16m
	8660, // 962.3mbar = 433.02m
	8678, // 962.2mbar = 433.89m
	8695, // 962.1mbar = 434.76m
	8713, // 962mbar = 435.63m
	8730, // 961.9mbar = 436.5m
	8747, // 961.8mbar = 437.36m
	8765, // 961.7mbar = 438.23m
	8782, // 961.6mbar = 439.1m
	8799, // 961.5mbar = 439.97m
	8817, // 961.4mbar = 440.84m
	8834, // 961.3mbar = 441.71m
	8851, // 961.2mbar = 442.57m
	8869, // 961.1mbar = 443.44m
	8886, // 961mbar = 444.31m
	8904, // 960.9mbar = 445.18m
	8921, // 960.8mbar = 446.05m
	8938, // 960.7mbar = 446.92m
	8956, // 960.6mbar = 447.79m
	8973, // 960.5mbar = 448.66m
	8991, // 960.4mbar = 449.53m
	9008, // 960.3mbar = 450.4m
	9025, // 960.2mbar = 451.27m
	9043, // 960.1mbar = 452.14m
	9060, // 960mbar = 453.01m
	9077, // 959.9mbar = 453.87m
	9095, // 959.8mbar = 454.74m
	9112, // 959.7mbar = 455.61m
	9130, // 959.6mbar = 456.48m
	9147, // 959.5mbar = 457.35m
	9164, // 959.4mbar = 458.22m
	9182, // 959.3mbar = 459.09m
	9199, // 959.2mbar = 459.96m
	9217, // 959.1mbar = 460.83m
	9234, // 959mbar = 461.7m
	9252, // 958.9mbar = 462.58m
	9269, // 958.8mbar = 463.45m
	9286, // 958.7mbar = 464.32m
	9304, // 958.6mbar = 465.19m
	9321, // 958.5mbar = 466.06m
	9339, // 958.4mbar = 466.93m
	9356, // 958.3mbar = 467.8m
	9373, // 958.2mbar = 468.67m
	9391, // 958.1mbar = 469.54m
	9408, // 958mbar = 470.41m
	9426, // 957.9mbar = 471.28m
	9443, // 957.8mbar = 472.15m
	9461, // 957.7mbar = 473.03m
	9478, // 957.6mbar = 473.9m
	9495, // 957.5mbar = 474.77m
	9513, // 957.4mbar = 475.64m
	9530, // 957.3mbar = 476.51m
	9548, // 957.2mbar = 477.38m
	9565, // 957.1mbar = 478.25m
	9583, // 957mbar = 479.13m
	9600, // 956.9mbar = 480m
	9617, // 956.8mbar = 480.87m
	9635, // 956.7mbar = 481.74m
	9652, // 956.6mbar = 482.61m
	9670, // 956.5mbar = 483.49m
	9687, // 956.4mbar = 484.36m
	9705, // 956.3mbar = 485.23m
	9722, // 956.2mbar = 486.1m
	9740, // 956.1mbar = 486.98m
	9757, // 956mbar = 487.85m
	9774, // 955.9mbar = 488.72m
	9792, // 955.8mbar = 489.59m
	9809, // 955.7mbar = 490.47m
	9827, // 955.6mbar = 491.34m
	9844, // 955.5mbar = 492.21m
	9862, // 955.4mbar = 493.09m
	9879, // 955.3mbar = 493.96m
	9897, // 955.2mbar = 494.83m
	9914, // 955.1mbar = 495.7m
	9932, // 955mbar = 496.58m
	9949, // 954.9mbar = 497.45m
	9966, // 954.8mbar = 498.32m
	9984, // 954.7mbar = 499.2m
	10001, // 954.6mbar = 500.07m
	10019, // 954.5mbar = 500.95m
	10036, // 954.4mbar = 501.82m
	10054, // 954.3mbar = 502.69m
	10071, // 954.2mbar = 503.57m
	10089, // 954.1mbar = 504.44m
	10106, // 954mbar = 505.31m
	10124, // 953.9mbar = 506.19m
	10141, // 953.8mbar = 507.06m
	10159, // 953.7mbar = 507.94m
	10176, // 953.6mbar = 508.81m
	10194, // 953.5mbar = 509.69m
	10211, // 953.4mbar = 510.56m
	10229, // 953.3mbar = 511.43m
	10246, // 953.2mbar = 512.31m
	10264, // 953.1mbar = 513.18m
	10281, // 953mbar = 514.06m
	10299, // 952.9mbar = 514.93m
	10316, // 952.8mbar = 515.81m
	10334, // 952.7mbar = 516.68m
	10351, // 952.6mbar = 517.56m
	10369, // 952.5mbar = 518.43m
	10386, // 952.4mbar = 519.31m
	10404, // 952.3mbar = 520.18m
	10421, // 952.2mbar = 521.06m
	10439, // 952.1mbar = 521.93m
	10456, // 952mbar = 522.81m
	10474, // 951.9mbar = 523.69m
	10491, // 951.8mbar = 524.56m
	10509, // 951.7mbar = 525.44m
	10526, // 951.6mbar = 526.31m
	10544, // 951.5mbar = 527.19m
	10561, // 951.4mbar = 528.06m
	10579, // 951.3mbar = 528.94m
	10596, // 951.2mbar = 529.82m
	10614, // 951.1mbar = 530.69m
	10631, // 951mbar = 531.57m
	10649, // 950.9mbar = 532.45m
	10666, // 950.8mbar = 533.32m
	10684, // 950.7mbar = 534.2m
	10701, // 950.6mbar = 535.07m
	10719, // 950.5mbar = 535.95m
	10737, // 950.4mbar = 536.83m
	10754, // 950.3mbar = 537.7m
	10772, // 950.2mbar = 538.58m
	10789, // 950.1mbar = 539.46m
	10807, // 950mbar = 540.34m
	10824, // 949.9mbar = 541.21m
	10842, // 949.8mbar = 542.09m
	10859, // 949.7mbar = 542.97m
	10877, // 949.6mbar = 543.84m
	10894, // 949.5mbar = 544.72m
	10912, // 949.4mbar = 545.6m
	10930, // 949.3mbar = 546.48m
	10947, // 949.2mbar = 547.35m
	10965, // 949.1mbar = 548.23m
	10982, // 949mbar = 549.11m
	11000, // 948.9mbar = 549.99m
	11017, // 948.8mbar = 550.87m
	11035, // 948.7mbar = 551.74m
	11052, // 948.6mbar = 552.62m
	11070, // 948.5mbar = 553.5m
	11088, // 948.4mbar = 554.38m
	11105, // 948.3mbar = 555.26m
	11123, // 948.2mbar = 556.13m
	11140, // 948.1mbar = 557.01m
	11158, // 948mbar = 557.89m
	11175, // 947.9mbar = 558.77m
	11193, // 947.8mbar = 559.65m
	11211, // 947.7mbar = 560.53m
	11228, // 947.6mbar = 561.41m
	11246, // 947.5mbar = 562.28m
	11263, // 947.4mbar = 563.16m
	11281, // 947.3mbar = 564.04m
	11298, // 947.2mbar = 564.92m
	11316, // 947.1mbar = 565.8m
	11334, // 947mbar = 566.68m
	11351, // 946.9mbar = 567.56m
	11369, // 946.8mbar = 568.44m
	11386, // 946.7mbar = 569.32m
	11404, // 946.6mbar = 570.2m
	11422, // 946.5mbar = 571.08m
	11439, // 946.4mbar = 571.96m
	11457, // 946.3mbar = 572.84m
	11474, // 946.2mbar = 573.72m
	11492, // 946.1mbar = 574.6m
	11510, // 946mbar = 575.48m
	11527, // 945.9mbar = 576.36m
	11545, // 945.8mbar = 577.24m
	11562, // 945.7mbar = 578.12m
	11580, // 945.6mbar = 579m
	11598, // 945.5mbar = 579.88m
	11615, // 945.4mbar = 580.76m
	11633, // 945.3mbar = 581.64m
	11650, // 945.2mbar = 582.52m
	11668, // 945.1mbar = 583.4m
	11686, // 945mbar = 584.28m
	11703, // 944.9mbar = 585.16m
	11721, // 944.8mbar = 586.04m
	11738, // 944.7mbar = 586.92m
	11756, // 944.6mbar = 587.8m
	11774, // 944.5mbar = 588.68m
	11791, // 944.4mbar = 589.57m
	11809, // 944.3mbar = 590.45m
	11827, // 944.2mbar = 591.33m
	11844, // 944.1mbar = 592.21m
	11862, // 944mbar = 593.09m
	11879, // 943.9mbar = 593.97m
	11897, // 943.8mbar = 594.85m
	11915, // 943.7mbar = 595.74m
	11932, // 943.6mbar = 596.62m
	11950, // 943.5mbar = 597.5m
	11968, // 943.4mbar = 598.38m
	11985, // 943.3mbar = 599.26m
	12003, // 943.2mbar = 600.15m
	12021, // 943.1mbar = 601.03m
	12038, // 943mbar = 601.91m
	12056, // 942.9mbar = 602.79m
	12074, // 942.8mbar = 603.68m
	12091, // 942.7mbar = 604.56m
	12109, // 942.6mbar = 605.44m
	12126, // 942.5mbar = 606.32m
	12144, // 942.4mbar = 607.21m
	12162, // 942.3mbar = 608.09m
	12179, // 942.2mbar = 608.97m
	12197, // 942.1mbar = 609.85m
	12215, // 942mbar = 610.74m
	12232, // 941.9mbar = 611.62m
	12250, // 941.8mbar = 612.5m
	12268, // 941.7mbar = 613.39m
	12285, // 941.6mbar = 614.27m
	12303, // 941.5mbar = 615.15m
	12321, // 941.4mbar = 616.04m
	12338, // 941.3mbar = 616.92m
	12356, // 941.2mbar = 617.8m
	12374, // 941.1mbar = 618.69m
	12391, // 941mbar = 619.57m
	12409, // 940.9mbar = 620.46m
	12427, // 940.8mbar = 621.34m
	12444, // 940.7mbar = 622.22m
	12462, // 940.6mbar = 623.11m
	12480, // 940.5mbar = 623.99m
	12498, // 940.4mbar = 624.88m
	12515, // 940.3mbar = 625.76m
	12533, // 940.2mbar = 626.64m
	12551, // 940.1mbar = 627.53m
	12568, // 940mbar = 628.41m
	12586, // 939.9mbar = 629.3m
	12604, // 939.8mbar = 630.18m
	12621, // 939.7mbar = 631.07m
	12639, // 939.6mbar = 631.95m
	12657, // 939.5mbar = 632.84m
	12674, // 939.4mbar = 633.72m
	12692, // 939.3mbar = 634.61m
	12710, // 939.2mbar = 635.49m
	12728, // 939.1mbar = 636.38m
	12745, // 939mbar = 637.26m
	12763, // 938.9mbar = 638.15m
	12781, // 938.8mbar = 639.03m
	12798, // 938.7mbar = 639.92m
	12816, // 938.6mbar = 640.8m
	12834, // 938.5mbar = 641.69m
	12852, // 938.4mbar = 642.58m
	12869, // 938.3mbar = 643.46m
	12887, // 938.2mbar = 644.35m
	12905, // 938.1mbar = 645.23m
	12922, // 938mbar = 646.12m
	12940, // 937.9mbar = 647.01m
	12958, // 937.8mbar = 647.89m
	12976, // 937.7mbar = 648.78m
	12993, // 937.6mbar = 649.67m
	13011, // 937.5mbar = 650.55m
	13029, // 937.4mbar = 651.44m
	13046, // 937.3mbar = 652.32m
	13064, // 937.2mbar = 653.21m
	13082, // 937.1mbar = 654.1m
	13100, // 937mbar = 654.98m
	13117, // 936.9mbar = 655.87m
	13135, // 936.8mbar = 656.76m
	13153, // 936.7mbar = 657.65m
	13171, // 936.6mbar = 658.53m
	13188, // 936.5mbar = 659.42m
	13206, // 936.4mbar = 660.31m
	13224, // 936.3mbar = 661.19m
	13242, // 936.2mbar = 662.08m
	13259, // 936.1mbar = 662.97m
	13277, // 936mbar = 663.86m
	13295, // 935.9mbar = 664.74m
	13313, // 935.8mbar = 665.63m
	13330, // 935.7mbar = 666.52m
	13348, // 935.6mbar = 667.41m
	13366, // 935.5mbar = 668.3m
	13384, // 935.4mbar = 669.18m
	13401, // 935.3mbar = 670.07m
	13419, // 935.2mbar = 670.96m
	13437, // 935.1mbar = 671.85m
	13455, // 935mbar = 672.74m
	13473, // 934.9mbar = 673.63m
	13490, // 934.8mbar = 674.51m
	13508, // 934.7mbar = 675.4m
	13526, // 934.6mbar = 676.29m
	13544, // 934.5mbar = 677.18m
	13561, // 934.4mbar = 678.07m
	13579, // 934.3mbar = 678.96m
	13597, // 934.2mbar = 679.85m
	13615, // 934.1mbar = 680.74m
	13633, // 934mbar = 681.63m
	13650, // 933.9mbar = 682.51m
	13668, // 933.8mbar = 683.4m
	13686, // 933.7mbar = 684.29m
	13704, // 933.6mbar = 685.18m
	13721, // 933.5mbar = 686.07m
	13739, // 933.4mbar = 686.96m
	13757, // 933.3mbar = 687.85m
	13775, // 933.2mbar = 688.74m
	13793, // 933.1mbar = 689.63m
	13810, // 933mbar = 690.52m
	13828, // 932.9mbar = 691.41m
	13846, // 932.8mbar = 692.3m
	13864, // 932.7mbar = 693.19m
	13882, // 932.6mbar = 694.08m
	13899, // 932.5mbar = 694.97m
	13917, // 932.4mbar = 695.86m
	13935, // 932.3mbar = 696.75m
	13953, // 932.2mbar = 697.64m
	13971, // 932.1mbar = 698.53m
	13988, // 932mbar = 699.42m
	14006, // 931.9mbar = 700.31m
	14024, // 931.8mbar = 701.21m
	14042, // 931.7mbar = 702.1m
	//14060, // 931.6mbar = 702.99m
	//14078, // 931.5mbar = 703.88m
	//14095, // 931.4mbar = 704.77m
	//14113, // 931.3mbar = 705.66m
	//14131, // 931.2mbar = 706.55m
	//14149, // 931.1mbar = 707.44m
	//14167, // 931mbar = 708.33m
	//14185, // 930.9mbar = 709.23m
	//14202, // 930.8mbar = 710.12m
	//14220, // 930.7mbar = 711.01m
	//14238, // 930.6mbar = 711.9m
	//14256, // 930.5mbar = 712.79m
	//14274, // 930.4mbar = 713.69m
	//14292, // 930.3mbar = 714.58m
	//14309, // 930.2mbar = 715.47m
	//14327, // 930.1mbar = 716.36m
	//14345, // 930mbar = 717.25m
	//14363, // 929.9mbar = 718.15m
	//14381, // 929.8mbar = 719.04m
	//14399, // 929.7mbar = 719.93m
	//14416, // 929.6mbar = 720.82m
	//14434, // 929.5mbar = 721.72m
	//14452, // 929.4mbar = 722.61m
	//14470, // 929.3mbar = 723.5m
	//14488, // 929.2mbar = 724.39m
	//14506, // 929.1mbar = 725.29m
	//14524, // 929mbar = 726.18m
	//14541, // 928.9mbar = 727.07m
	//14559, // 928.8mbar = 727.97m
	//14577, // 928.7mbar = 728.86m
	//14595, // 928.6mbar = 729.75m
	//14613, // 928.5mbar = 730.65m
	//14631, // 928.4mbar = 731.54m
	//14649, // 928.3mbar = 732.43m
	//14667, // 928.2mbar = 733.33m
	//14684, // 928.1mbar = 734.22m
	//14702, // 928mbar = 735.11m
	//14720, // 927.9mbar = 736.01m
	//14738, // 927.8mbar = 736.9m
	//14756, // 927.7mbar = 737.8m
	//14774, // 927.6mbar = 738.69m
	//14792, // 927.5mbar = 739.58m
	//14810, // 927.4mbar = 740.48m
	//14827, // 927.3mbar = 741.37m
	//14845, // 927.2mbar = 742.27m
	//14863, // 927.1mbar = 743.16m
	//14881, // 927mbar = 744.06m
	//14899, // 926.9mbar = 744.95m
	//14917, // 926.8mbar = 745.85m
	//14935, // 926.7mbar = 746.74m
	//14953, // 926.6mbar = 747.64m
	//14971, // 926.5mbar = 748.53m
	//14989, // 926.4mbar = 749.43m
	//15006, // 926.3mbar = 750.32m
	//15024, // 926.2mbar = 751.22m
	//15042, // 926.1mbar = 752.11m
	//15060, // 926mbar = 753.01m
	//15078, // 925.9mbar = 753.9m
	//15096, // 925.8mbar = 754.8m
	//15114, // 925.7mbar = 755.69m
	//15132, // 925.6mbar = 756.59m
	//15150, // 925.5mbar = 757.48m
	//15168, // 925.4mbar = 758.38m
	//15186, // 925.3mbar = 759.28m
	//15203, // 925.2mbar = 760.17m
	//15221, // 925.1mbar = 761.07m
	//15239, // 925mbar = 761.96m
	//15257, // 924.9mbar = 762.86m
	//15275, // 924.8mbar = 763.76m
	//15293, // 924.7mbar = 764.65m
	//15311, // 924.6mbar = 765.55m
	//15329, // 924.5mbar = 766.45m
	//15347, // 924.4mbar = 767.34m
	//15365, // 924.3mbar = 768.24m
	//15383, // 924.2mbar = 769.14m
	//15401, // 924.1mbar = 770.03m
	//15419, // 924mbar = 770.93m
	//15437, // 923.9mbar = 771.83m
	//15454, // 923.8mbar = 772.72m
	//15472, // 923.7mbar = 773.62m
	//15490, // 923.6mbar = 774.52m
	//15508, // 923.5mbar = 775.42m
	//15526, // 923.4mbar = 776.31m
	//15544, // 923.3mbar = 777.21m
	//15562, // 923.2mbar = 778.11m
	//15580, // 923.1mbar = 779.01m
	//15598, // 923mbar = 779.9m
	//15616, // 922.9mbar = 780.8m
	//15634, // 922.8mbar = 781.7m
	//15652, // 922.7mbar = 782.6m
	//15670, // 922.6mbar = 783.49m
	//15688, // 922.5mbar = 784.39m
	//15706, // 922.4mbar = 785.29m
	//15724, // 922.3mbar = 786.19m
	//15742, // 922.2mbar = 787.09m
	//15760, // 922.1mbar = 787.99m
	//15778, // 922mbar = 788.88m
	//15796, // 921.9mbar = 789.78m
	//15814, // 921.8mbar = 790.68m
	//15832, // 921.7mbar = 791.58m
	//15850, // 921.6mbar = 792.48m
	//15868, // 921.5mbar = 793.38m
	//15886, // 921.4mbar = 794.28m
	//15904, // 921.3mbar = 795.18m
	//15921, // 921.2mbar = 796.07m
	//15939, // 921.1mbar = 796.97m
	//15957, // 921mbar = 797.87m
	//15975, // 920.9mbar = 798.77m
	//15993, // 920.8mbar = 799.67m
	//16011, // 920.7mbar = 800.57m
	//16029, // 920.6mbar = 801.47m
	//16047, // 920.5mbar = 802.37m
	//16065, // 920.4mbar = 803.27m
	//16083, // 920.3mbar = 804.17m
	//16101, // 920.2mbar = 805.07m
	//16119, // 920.1mbar = 805.97m
	//16137, // 920mbar = 806.87m
	//16155, // 919.9mbar = 807.77m
	//16173, // 919.8mbar = 808.67m
	//16191, // 919.7mbar = 809.57m
	//16209, // 919.6mbar = 810.47m
	//16227, // 919.5mbar = 811.37m
	//16245, // 919.4mbar = 812.27m
	//16263, // 919.3mbar = 813.17m
	//16281, // 919.2mbar = 814.07m
	//16299, // 919.1mbar = 814.97m
	//16318, // 919mbar = 815.88m
	//16336, // 918.9mbar = 816.78m
	//16354, // 918.8mbar = 817.68m
	//16372, // 918.7mbar = 818.58m
	//16390, // 918.6mbar = 819.48m
	//16408, // 918.5mbar = 820.38m
	//16426, // 918.4mbar = 821.28m
	//16444, // 918.3mbar = 822.18m
	//16462, // 918.2mbar = 823.09m
	//16480, // 918.1mbar = 823.99m
	//16498, // 918mbar = 824.89m
	//16516, // 917.9mbar = 825.79m
	//16534, // 917.8mbar = 826.69m
	//16552, // 917.7mbar = 827.59m
	//16570, // 917.6mbar = 828.5m
	//16588, // 917.5mbar = 829.4m
	//16606, // 917.4mbar = 830.3m
	//16624, // 917.3mbar = 831.2m
	//16642, // 917.2mbar = 832.1m
	//16660, // 917.1mbar = 833.01m
	//16678, // 917mbar = 833.91m
	//16696, // 916.9mbar = 834.81m
	//16714, // 916.8mbar = 835.71m
	//16732, // 916.7mbar = 836.62m
	//16750, // 916.6mbar = 837.52m
	//16768, // 916.5mbar = 838.42m
	//16787, // 916.4mbar = 839.33m
	//16805, // 916.3mbar = 840.23m
	//16823, // 916.2mbar = 841.13m
	//16841, // 916.1mbar = 842.04m
	//16859, // 916mbar = 842.94m
	//16877, // 915.9mbar = 843.84m
	//16895, // 915.8mbar = 844.75m
	//16913, // 915.7mbar = 845.65m
	//16931, // 915.6mbar = 846.55m
	//16949, // 915.5mbar = 847.46m
	//16967, // 915.4mbar = 848.36m
	//16985, // 915.3mbar = 849.26m
	//17003, // 915.2mbar = 850.17m
	//17021, // 915.1mbar = 851.07m
	//17040, // 915mbar = 851.98m
	//17058, // 914.9mbar = 852.88m
	//17076, // 914.8mbar = 853.78m
	//17094, // 914.7mbar = 854.69m
	//17112, // 914.6mbar = 855.59m
	//17130, // 914.5mbar = 856.5m
	//17148, // 914.4mbar = 857.4m
	//17166, // 914.3mbar = 858.31m
	//17184, // 914.2mbar = 859.21m
	//17202, // 914.1mbar = 860.12m
	//17220, // 914mbar = 861.02m
	//17238, // 913.9mbar = 861.92m
	//17257, // 913.8mbar = 862.83m
	//17275, // 913.7mbar = 863.74m
	//17293, // 913.6mbar = 864.64m
	//17311, // 913.5mbar = 865.55m
	//17329, // 913.4mbar = 866.45m
	//17347, // 913.3mbar = 867.36m
	//17365, // 913.2mbar = 868.26m
	//17383, // 913.1mbar = 869.17m
	//17401, // 913mbar = 870.07m
	//17420, // 912.9mbar = 870.98m
	//17438, // 912.8mbar = 871.88m
	//17456, // 912.7mbar = 872.79m
	//17474, // 912.6mbar = 873.7m
};


#define MIN_PRESSURE			9317		// 931.7 mbar
#define MAX_PRESSURE			10140		// 1014.0 mbar
#define ALTITUTEMAP_ROWS		(sizeof(AltituteMap)/sizeof(AltituteMap[0]))
