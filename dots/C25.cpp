Keytimes C25x, C25z;
void loadC25() {
	C25x.Init();
	C25x.AddTimeValue(0.0, 42);
	C25x.AddTimeValue(10.0, 48.5);
	C25x.AddTimeValue(8.125, 48.5);
	C25x.AddTimeValue(7.5, 48.5);
	C25x.AddTimeValue(6.875, 48.5);
	C25x.AddTimeValue(6.25, 49);
	C25x.AddTimeValue(5.625, 49);
	C25x.AddTimeValue(5.0, 52);
	C25x.AddTimeValue(4.375, 50.25);
	C25x.AddTimeValue(3.75, 50.25);
	C25x.AddTimeValue(3.125, 50.25);
	C25x.AddTimeValue(2.5, 50.25);
	C25x.AddTimeValue(1.875, 50.25);
	C25x.AddTimeValue(1.25, 42);
	C25x.AddTimeValue(0.625, 42);

	C25z.Init();
	C25z.AddTimeValue(0.0, -49.5);
	C25z.AddTimeValue(10.0, -17);
	C25z.AddTimeValue(8.125, -17);
	C25z.AddTimeValue(7.5, -17);
	C25z.AddTimeValue(6.875, -17);
	C25z.AddTimeValue(6.25, -20);
	C25z.AddTimeValue(5.625, -20);
	C25z.AddTimeValue(5.0, -18);
	C25z.AddTimeValue(4.375, -14);
	C25z.AddTimeValue(3.75, -14);
	C25z.AddTimeValue(3.125, -14);
	C25z.AddTimeValue(2.5, -22);
	C25z.AddTimeValue(1.875, -22);
	C25z.AddTimeValue(1.25, -34);
	C25z.AddTimeValue(0.625, -43.5);
}