Keytimes P11x, P11z;
void loadP11() {
	P11x.Init();
	P11x.AddTimeValue(0.0, -23.5);
	P11x.AddTimeValue(10.0, -19.75);
	P11x.AddTimeValue(8.125, -19.75);
	P11x.AddTimeValue(7.5, -19.75);
	P11x.AddTimeValue(6.875, -19.75);
	P11x.AddTimeValue(6.25, -19);
	P11x.AddTimeValue(5.625, -19);
	P11x.AddTimeValue(5.0, -23.5);
	P11x.AddTimeValue(4.375, -23.5);
	P11x.AddTimeValue(3.75, -23.5);
	P11x.AddTimeValue(3.125, -23.5);
	P11x.AddTimeValue(2.5, -23.5);
	P11x.AddTimeValue(1.875, -23.5);
	P11x.AddTimeValue(1.25, -23.5);
	P11x.AddTimeValue(0.625, -23.5);

	P11z.Init();
	P11z.AddTimeValue(0.0, -51.5);
	P11z.AddTimeValue(10.0, -25);
	P11z.AddTimeValue(8.125, -25);
	P11z.AddTimeValue(7.5, -25);
	P11z.AddTimeValue(6.875, -25);
	P11z.AddTimeValue(6.25, -22);
	P11z.AddTimeValue(5.625, -22);
	P11z.AddTimeValue(5.0, -26);
	P11z.AddTimeValue(4.375, -26);
	P11z.AddTimeValue(3.75, -26);
	P11z.AddTimeValue(3.125, -26);
	P11z.AddTimeValue(2.5, -34);
	P11z.AddTimeValue(1.875, -34);
	P11z.AddTimeValue(1.25, -38);
	P11z.AddTimeValue(0.625, -45.5);
}