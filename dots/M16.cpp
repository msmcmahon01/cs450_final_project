Keytimes M16x, M16z;
void loadM16() {
	M16x.Init();
	M16x.AddTimeValue(0.0, 50);
	M16x.AddTimeValue(10.0, 42);
	M16x.AddTimeValue(8.125, 42);
	M16x.AddTimeValue(7.5, 41.75);
	M16x.AddTimeValue(6.875, 41.25);
	M16x.AddTimeValue(6.25, 41);
	M16x.AddTimeValue(5.625, 41);
	M16x.AddTimeValue(5.0, 48);
	M16x.AddTimeValue(4.375, 44);
	M16x.AddTimeValue(3.75, 44);
	M16x.AddTimeValue(3.125, 44);
	M16x.AddTimeValue(2.5, 52);
	M16x.AddTimeValue(1.875, 52);
	M16x.AddTimeValue(1.25, 50);
	M16x.AddTimeValue(0.625, 50);

	M16z.Init();
	M16z.AddTimeValue(0.0, 44);
	M16z.AddTimeValue(10.0, 17.25);
	M16z.AddTimeValue(8.125, 17.25);
	M16z.AddTimeValue(7.5, 18.25);
	M16z.AddTimeValue(6.875, 19);
	M16z.AddTimeValue(6.25, 20);
	M16z.AddTimeValue(5.625, 20);
	M16z.AddTimeValue(5.0, 22);
	M16z.AddTimeValue(4.375, 30);
	M16z.AddTimeValue(3.75, 30);
	M16z.AddTimeValue(3.125, 30);
	M16z.AddTimeValue(2.5, 26);
	M16z.AddTimeValue(1.875, 26);
	M16z.AddTimeValue(1.25, 26);
	M16z.AddTimeValue(0.625, 42);
}