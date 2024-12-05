Keytimes M12x, M12z;
void loadM12() {
	M12x.Init();
	M12x.AddTimeValue(0.0, 54);
	M12x.AddTimeValue(10.0, 33);
	M12x.AddTimeValue(8.125, 33);
	M12x.AddTimeValue(7.5, 32.75);
	M12x.AddTimeValue(6.875, 32.25);
	M12x.AddTimeValue(6.25, 32);
	M12x.AddTimeValue(5.625, 32);
	M12x.AddTimeValue(5.0, 40);
	M12x.AddTimeValue(4.375, 44);
	M12x.AddTimeValue(3.75, 44);
	M12x.AddTimeValue(3.125, 44);
	M12x.AddTimeValue(2.5, 52);
	M12x.AddTimeValue(1.875, 52);
	M12x.AddTimeValue(1.25, 54);
	M12x.AddTimeValue(0.625, 54);

	M12z.Init();
	M12z.AddTimeValue(0.0, 44);
	M12z.AddTimeValue(10.0, 16.25);
	M12z.AddTimeValue(8.125, 16.25);
	M12z.AddTimeValue(7.5, 17.5);
	M12z.AddTimeValue(6.875, 18.75);
	M12z.AddTimeValue(6.25, 20);
	M12z.AddTimeValue(5.625, 20);
	M12z.AddTimeValue(5.0, 22);
	M12z.AddTimeValue(4.375, 22);
	M12z.AddTimeValue(3.75, 22);
	M12z.AddTimeValue(3.125, 22);
	M12z.AddTimeValue(2.5, 18);
	M12z.AddTimeValue(1.875, 18);
	M12z.AddTimeValue(1.25, 26);
	M12z.AddTimeValue(0.625, 42);
}