Keytimes M15x, M15z;
void loadM15() {
	M15x.Init();
	M15x.AddTimeValue(0.0, 42);
	M15x.AddTimeValue(10.0, 39.75);
	M15x.AddTimeValue(8.125, 39.75);
	M15x.AddTimeValue(7.5, 39.25);
	M15x.AddTimeValue(6.875, 38.5);
	M15x.AddTimeValue(6.25, 38);
	M15x.AddTimeValue(5.625, 38);
	M15x.AddTimeValue(5.0, 44);
	M15x.AddTimeValue(4.375, 44);
	M15x.AddTimeValue(3.75, 44);
	M15x.AddTimeValue(3.125, 44);
	M15x.AddTimeValue(2.5, 52);
	M15x.AddTimeValue(1.875, 52);
	M15x.AddTimeValue(1.25, 42);
	M15x.AddTimeValue(0.625, 42);

	M15z.Init();
	M15z.AddTimeValue(0.0, 42);
	M15z.AddTimeValue(10.0, 17.25);
	M15z.AddTimeValue(8.125, 17.25);
	M15z.AddTimeValue(7.5, 14.5);
	M15z.AddTimeValue(6.875, 11.75);
	M15z.AddTimeValue(6.25, 9);
	M15z.AddTimeValue(5.625, 9);
	M15z.AddTimeValue(5.0, 10);
	M15z.AddTimeValue(4.375, 6);
	M15z.AddTimeValue(3.75, 6);
	M15z.AddTimeValue(3.125, 6);
	M15z.AddTimeValue(2.5, 6);
	M15z.AddTimeValue(1.875, 6);
	M15z.AddTimeValue(1.25, 10);
	M15z.AddTimeValue(0.625, 26);
}