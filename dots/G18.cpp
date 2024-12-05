Keytimes G18x, G18z;
void loadG18() {
	G18x.Init();
	G18x.AddTimeValue(0.0, 60);
	G18x.AddTimeValue(10.0, 60);
	G18x.AddTimeValue(8.125, 60);
	G18x.AddTimeValue(7.5, 60);
	G18x.AddTimeValue(6.875, 60);
	G18x.AddTimeValue(6.25, 60);
	G18x.AddTimeValue(5.625, 60);
	G18x.AddTimeValue(5.0, 60);
	G18x.AddTimeValue(4.375, 60);
	G18x.AddTimeValue(3.75, 60);
	G18x.AddTimeValue(3.125, 60);
	G18x.AddTimeValue(2.5, 60);
	G18x.AddTimeValue(1.875, 60);
	G18x.AddTimeValue(1.25, 60);
	G18x.AddTimeValue(0.625, 60);

	G18z.Init();
	G18z.AddTimeValue(0.0, -55);
	G18z.AddTimeValue(10.0, -30);
	G18z.AddTimeValue(8.125, -30);
	G18z.AddTimeValue(7.5, -30);
	G18z.AddTimeValue(6.875, -30);
	G18z.AddTimeValue(6.25, -30);
	G18z.AddTimeValue(5.625, -30);
	G18z.AddTimeValue(5.0, -32.5);
	G18z.AddTimeValue(4.375, -37.25);
	G18z.AddTimeValue(3.75, -42);
	G18z.AddTimeValue(3.125, -42);
	G18z.AddTimeValue(2.5, -42);
	G18z.AddTimeValue(1.875, -42);
	G18z.AddTimeValue(1.25, -42);
	G18z.AddTimeValue(0.625, -49);
}