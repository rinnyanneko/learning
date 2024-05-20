namespace A20240316_02
{
    public partial class MainForm : Form
    {
        public MainForm()
        {
            InitializeComponent();
        }

        private void MainForm_Load(object sender, EventArgs e)
        {
            labelTitle.Text = "�� �{ �� ��";
            labelTitle.BorderStyle = BorderStyle.Fixed3D;
            labelTitle.BackColor = Color.LightGreen;
            labelTitle.ForeColor = Color.IndianRed;
            labelTitle.Font = new Font("����K�", 16, FontStyle.Bold | FontStyle.Underline);
            for (int iMonth = 1; iMonth <= 12; iMonth++)
            {
                comboBoxBDM.Items.Add(iMonth);
            }
            comboBoxBDM.Text = DateTime.Today.Month.ToString();

            int iYear = DateTime.Now.Year;
            while (iYear >= DateTime.Now.Year - 100)
            {
                comboBoxBDY.Items.Add(iYear--);
            }
            comboBoxBDY.Text = (DateTime.Today.Year - 18).ToString();
            this.refreshDay();
        }
        private void buttonOutput_Click(object sender, EventArgs e)
        {
            string strOutputData = "";

            if (textBoxFullName.Text != "")
            {
                strOutputData = "�����F" + textBoxFullName.Text + "\n";
            }
            if (radioButtonGenderFemale.Checked)
            {
                strOutputData += "���ʁF��\n";
            }
            else
            {
                strOutputData += "���ʁF�j\n";
            }

            if (radioButtonBloodTypeA.Checked)
            {
                strOutputData += "���^�F" + radioButtonBloodTypeA.Text + "\n";
            }
            else if (radioButtonBloodTypeB.Checked)
            {
                strOutputData += "���^�F" + radioButtonBloodTypeB.Text + "\n";
            }
            else if (radioButtonBloodTypeO.Checked)
            {
                strOutputData += "���^�F" + radioButtonBloodTypeO.Text + "\n";
            }
            else
            {
                strOutputData += "���^�F" + radioButtonBloodTypeAB.Text + "\n";
            }

            if (checkBoxInterest1.Checked || checkBoxInterest2.Checked || checkBoxInterest3.Checked || checkBoxInterest4.Checked)
            {
                strOutputData += "����F";
                if (checkBoxInterest1.Checked)
                {
                    strOutputData += checkBoxInterest1.Text + " ";
                }
                if (checkBoxInterest2.Checked)
                {
                    strOutputData += checkBoxInterest2.Text + " ";
                }
                if (checkBoxInterest3.Checked)
                {
                    strOutputData += checkBoxInterest3.Text + " ";
                }
                if (checkBoxInterest4.Checked)
                {
                    strOutputData += checkBoxInterest4.Text + " ";
                }
                strOutputData += "\n";
            }
            strOutputData += "�o�������F" + comboBoxBDY.Text + "-" + comboBoxBDM.Text + "-" + comboBoxBDD.Text + "\n";
            labelOutput.Text = strOutputData;
        }

        private void comboBoxBDM_SelectedIndexChanged(object sender, EventArgs e)
        {
            this.refreshDay();
        }

        private void comboBoxBDY_SelectedIndexChanged(object sender, EventArgs e)
        {
            this.refreshDay();
        }
        private void refreshDay()
        {
            comboBoxBDD.Items.Clear();
            int days = 1;
            int iDays = 0;
            int icbxMonth = int.Parse(comboBoxBDM.Text);
            if (icbxMonth == 2)
            {
                iDays = 28;
                if ((int.Parse(comboBoxBDY.Text) % 4 == 0 && int.Parse(comboBoxBDY.Text) % 100 != 0) || int.Parse(comboBoxBDY.Text) % 400 == 0)
                {
                    iDays = 29;
                }
            }
            else if (icbxMonth == 4 || icbxMonth == 6 || icbxMonth == 9 || icbxMonth == 11)
            {
                iDays = 30;
            }
            else
            {
                iDays = 31;
            }

            do
            {
                comboBoxBDD.Items.Add(days++);
            } while (days <= iDays);
        }
    }
}
