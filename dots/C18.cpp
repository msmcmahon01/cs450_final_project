Keytimes C18x, C18z;
void loadC18() {
	C18x.Init();
	C18x.AddTimeValue(0.0, 63);
	C18x.AddTimeValue(10.0, 62.5);
	C18x.AddTimeValue(8.125, 62.5);
	C18x.AddTimeValue(7.5, 62.5);
	C18x.AddTimeValue(6.875, 65.25);
	C18x.AddTimeValue(6.25, 68);
	C18x.AddTimeValue(5.625, 68);
	C18x.AddTimeValue(5.0, 64);
	C18x.AddTimeValue(4.375, 69);
	C18x.AddTimeValue(3.75, 69);
	C18x.AddTimeValue(3.125, 69);
	C18x.AddTimeValue(2.5, 69);
	C18x.AddTimeValue(1.875, 69);
	C18x.AddTimeValue(1.25, 63);
	C18x.AddTimeValue(0.625, 63);

	C18z.Init();
	C18z.AddTimeValue(0.0, -47.75);
	C18z.AddTimeValue(10.0, -10.75);
	C18z.AddTimeValue(8.125, -10.75);
	C18z.AddTimeValue(7.5, -10.75);
	C18z.AddTimeValue(6.875, -10.75);
	C18z.AddTimeValue(6.25, -11);
	C18z.AddTimeValue(5.625, -11);
	C18z.AddTimeValue(5.0, -10);
	C18z.AddTimeValue(4.375, -14);
	C18z.AddTimeValue(3.75, -14);
	C18z.AddTimeValue(3.125, -14);
	C18z.AddTimeValue(2.5, -22);
	C18z.AddTimeValue(1.875, -22);
	C18z.AddTimeValue(1.25, -30);
	C18z.AddTimeValue(0.625, -42);
}