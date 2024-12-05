Keytimes G15x, G15z;
void loadG15() {
	G15x.Init();
	G15x.AddTimeValue(0.0, 36);
	G15x.AddTimeValue(10.0, 36);
	G15x.AddTimeValue(8.125, 36);
	G15x.AddTimeValue(7.5, 36);
	G15x.AddTimeValue(6.875, 36);
	G15x.AddTimeValue(6.25, 36);
	G15x.AddTimeValue(5.625, 36);
	G15x.AddTimeValue(5.0, 36);
	G15x.AddTimeValue(4.375, 36);
	G15x.AddTimeValue(3.75, 36);
	G15x.AddTimeValue(3.125, 36);
	G15x.AddTimeValue(2.5, 36);
	G15x.AddTimeValue(1.875, 36);
	G15x.AddTimeValue(1.25, 36);
	G15x.AddTimeValue(0.625, 36);

	G15z.Init();
	G15z.AddTimeValue(0.0, -55);
	G15z.AddTimeValue(10.0, -34);
	G15z.AddTimeValue(8.125, -34);
	G15z.AddTimeValue(7.5, -34);
	G15z.AddTimeValue(6.875, -34);
	G15z.AddTimeValue(6.25, -34);
	G15z.AddTimeValue(5.625, -34);
	G15z.AddTimeValue(5.0, -35.5);
	G15z.AddTimeValue(4.375, -38.75);
	G15z.AddTimeValue(3.75, -42);
	G15z.AddTimeValue(3.125, -42);
	G15z.AddTimeValue(2.5, -42);
	G15z.AddTimeValue(1.875, -42);
	G15z.AddTimeValue(1.25, -42);
	G15z.AddTimeValue(0.625, -49);
}