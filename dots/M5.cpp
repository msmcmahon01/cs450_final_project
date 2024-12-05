Keytimes M5x, M5z;
void loadM5() {
	M5x.Init();
	M5x.AddTimeValue(0.0, 20);
	M5x.AddTimeValue(10.0, 23.25);
	M5x.AddTimeValue(8.125, 23.25);
	M5x.AddTimeValue(7.5, 19.75);
	M5x.AddTimeValue(6.875, 16.5);
	M5x.AddTimeValue(6.25, 13);
	M5x.AddTimeValue(5.625, 13);
	M5x.AddTimeValue(5.0, 8);
	M5x.AddTimeValue(4.375, 12);
	M5x.AddTimeValue(3.75, 12);
	M5x.AddTimeValue(3.125, 12);
	M5x.AddTimeValue(2.5, 20);
	M5x.AddTimeValue(1.875, 20);
	M5x.AddTimeValue(1.25, 20);
	M5x.AddTimeValue(0.625, 20);

	M5z.Init();
	M5z.AddTimeValue(0.0, 42);
	M5z.AddTimeValue(10.0, 8.25);
	M5z.AddTimeValue(8.125, 8.25);
	M5z.AddTimeValue(7.5, 6);
	M5z.AddTimeValue(6.875, 4);
	M5z.AddTimeValue(6.25, 2);
	M5z.AddTimeValue(5.625, 2);
	M5z.AddTimeValue(5.0, 10);
	M5z.AddTimeValue(4.375, 10);
	M5z.AddTimeValue(3.75, 10);
	M5z.AddTimeValue(3.125, 10);
	M5z.AddTimeValue(2.5, 6);
	M5z.AddTimeValue(1.875, 6);
	M5z.AddTimeValue(1.25, 10);
	M5z.AddTimeValue(0.625, 26);
}