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
            labelTitle.Text = "基 本 資 料";
            labelTitle.BorderStyle = BorderStyle.Fixed3D;
            labelTitle.BackColor = Color.LightGreen;
            labelTitle.ForeColor = Color.IndianRed;
            labelTitle.Font = new Font("微軟正黑體", 16, FontStyle.Bold | FontStyle.Underline);
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
                strOutputData = "姓名：" + textBoxFullName.Text + "\n";
            }
            if (radioButtonGenderFemale.Checked)
            {
                strOutputData += "性別：女\n";
            }
            else
            {
                strOutputData += "性別：男\n";
            }

            if (radioButtonBloodTypeA.Checked)
            {
                strOutputData += "血型：" + radioButtonBloodTypeA.Text + "\n";
            }
            else if (radioButtonBloodTypeB.Checked)
            {
                strOutputData += "血型：" + radioButtonBloodTypeB.Text + "\n";
            }
            else if (radioButtonBloodTypeO.Checked)
            {
                strOutputData += "血型：" + radioButtonBloodTypeO.Text + "\n";
            }
            else
            {
                strOutputData += "血型：" + radioButtonBloodTypeAB.Text + "\n";
            }

            if (checkBoxInterest1.Checked || checkBoxInterest2.Checked || checkBoxInterest3.Checked || checkBoxInterest4.Checked)
            {
                strOutputData += "興趣：";
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
            strOutputData += "出生日期：" + comboBoxBDY.Text + "-" + comboBoxBDM.Text + "-" + comboBoxBDD.Text + "\n";
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
