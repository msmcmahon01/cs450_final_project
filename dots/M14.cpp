Keytimes M14x, M14z;
void loadM14() {
	M14x.Init();
	M14x.AddTimeValue(0.0, 36);
	M14x.AddTimeValue(10.0, 37.5);
	M14x.AddTimeValue(8.125, 37.5);
	M14x.AddTimeValue(7.5, 37.25);
	M14x.AddTimeValue(6.875, 37.25);
	M14x.AddTimeValue(6.25, 37);
	M14x.AddTimeValue(5.625, 37);
	M14x.AddTimeValue(5.0, 40);
	M14x.AddTimeValue(4.375, 36);
	M14x.AddTimeValue(3.75, 36);
	M14x.AddTimeValue(3.125, 36);
	M14x.AddTimeValue(2.5, 44);
	M14x.AddTimeValue(1.875, 44);
	M14x.AddTimeValue(1.25, 36);
	M14x.AddTimeValue(0.625, 36);

	M14z.Init();
	M14z.AddTimeValue(0.0, 42);
	M14z.AddTimeValue(10.0, 17);
	M14z.AddTimeValue(8.125, 17);
	M14z.AddTimeValue(7.5, 12.25);
	M14z.AddTimeValue(6.875, 7.75);
	M14z.AddTimeValue(6.25, 3);
	M14z.AddTimeValue(5.625, 3);
	M14z.AddTimeValue(5.0, 10);
	M14z.AddTimeValue(4.375, 2);
	M14z.AddTimeValue(3.75, 2);
	M14z.AddTimeValue(3.125, 2);
	M14z.AddTimeValue(2.5, 2);
	M14z.AddTimeValue(1.875, 2);
	M14z.AddTimeValue(1.25, 10);
	M14z.AddTimeValue(0.625, 26);
}