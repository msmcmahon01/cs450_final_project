Keytimes C13x, C13z;
void loadC13() {
	C13x.Init();
	C13x.AddTimeValue(0.0, 27.5);
	C13x.AddTimeValue(10.0, 24);
	C13x.AddTimeValue(8.125, 24);
	C13x.AddTimeValue(7.5, 24);
	C13x.AddTimeValue(6.875, 24);
	C13x.AddTimeValue(6.25, 25);
	C13x.AddTimeValue(5.625, 25);
	C13x.AddTimeValue(5.0, 27.5);
	C13x.AddTimeValue(4.375, 27.5);
	C13x.AddTimeValue(3.75, 27.5);
	C13x.AddTimeValue(3.125, 27.5);
	C13x.AddTimeValue(2.5, 27.5);
	C13x.AddTimeValue(1.875, 27.5);
	C13x.AddTimeValue(1.25, 27.5);
	C13x.AddTimeValue(0.625, 27.5);

	C13z.Init();
	C13z.AddTimeValue(0.0, -51.5);
	C13z.AddTimeValue(10.0, -25);
	C13z.AddTimeValue(8.125, -25);
	C13z.AddTimeValue(7.5, -25);
	C13z.AddTimeValue(6.875, -25);
	C13z.AddTimeValue(6.25, -26);
	C13z.AddTimeValue(5.625, -26);
	C13z.AddTimeValue(5.0, -26);
	C13z.AddTimeValue(4.375, -26);
	C13z.AddTimeValue(3.75, -26);
	C13z.AddTimeValue(3.125, -26);
	C13z.AddTimeValue(2.5, -34);
	C13z.AddTimeValue(1.875, -34);
	C13z.AddTimeValue(1.25, -38);
	C13z.AddTimeValue(0.625, -45.5);
}