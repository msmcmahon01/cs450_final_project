Keytimes P15x, P15z;
void loadP15() {
	P15x.Init();
	P15x.AddTimeValue(0.0, 0);
	P15x.AddTimeValue(10.0, -15.75);
	P15x.AddTimeValue(8.125, -15.75);
	P15x.AddTimeValue(7.5, -15.75);
	P15x.AddTimeValue(6.875, -15.75);
	P15x.AddTimeValue(6.25, -16);
	P15x.AddTimeValue(5.625, -16);
	P15x.AddTimeValue(5.0, -14);
	P15x.AddTimeValue(4.375, -5.25);
	P15x.AddTimeValue(3.75, -5.25);
	P15x.AddTimeValue(3.125, -5.25);
	P15x.AddTimeValue(2.5, -5.25);
	P15x.AddTimeValue(1.875, -5.25);
	P15x.AddTimeValue(1.25, 0);
	P15x.AddTimeValue(0.625, 0);

	P15z.Init();
	P15z.AddTimeValue(0.0, -48.25);
	P15z.AddTimeValue(10.0, -15.25);
	P15z.AddTimeValue(8.125, -15.25);
	P15z.AddTimeValue(7.5, -15.25);
	P15z.AddTimeValue(6.875, -15.25);
	P15z.AddTimeValue(6.25, -14);
	P15z.AddTimeValue(5.625, -14);
	P15z.AddTimeValue(5.0, -14);
	P15z.AddTimeValue(4.375, -14);
	P15z.AddTimeValue(3.75, -14);
	P15z.AddTimeValue(3.125, -14);
	P15z.AddTimeValue(2.5, -22);
	P15z.AddTimeValue(1.875, -22);
	P15z.AddTimeValue(1.25, -26);
	P15z.AddTimeValue(0.625, -42);
}