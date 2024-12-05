Keytimes G12x, G12z;
void loadG12() {
	G12x.Init();
	G12x.AddTimeValue(0.0, 12);
	G12x.AddTimeValue(10.0, 12);
	G12x.AddTimeValue(8.125, 12);
	G12x.AddTimeValue(7.5, 12);
	G12x.AddTimeValue(6.875, 12);
	G12x.AddTimeValue(6.25, 12);
	G12x.AddTimeValue(5.625, 12);
	G12x.AddTimeValue(5.0, 12);
	G12x.AddTimeValue(4.375, 12);
	G12x.AddTimeValue(3.75, 12);
	G12x.AddTimeValue(3.125, 12);
	G12x.AddTimeValue(2.5, 12);
	G12x.AddTimeValue(1.875, 12);
	G12x.AddTimeValue(1.25, 12);
	G12x.AddTimeValue(0.625, 12);

	G12z.Init();
	G12z.AddTimeValue(0.0, -55);
	G12z.AddTimeValue(10.0, -36);
	G12z.AddTimeValue(8.125, -36);
	G12z.AddTimeValue(7.5, -36);
	G12z.AddTimeValue(6.875, -36);
	G12z.AddTimeValue(6.25, -36);
	G12z.AddTimeValue(5.625, -36);
	G12z.AddTimeValue(5.0, -38.75);
	G12z.AddTimeValue(4.375, -40.5);
	G12z.AddTimeValue(3.75, -42);
	G12z.AddTimeValue(3.125, -42);
	G12z.AddTimeValue(2.5, -42);
	G12z.AddTimeValue(1.875, -42);
	G12z.AddTimeValue(1.25, -42);
	G12z.AddTimeValue(0.625, -49);
}