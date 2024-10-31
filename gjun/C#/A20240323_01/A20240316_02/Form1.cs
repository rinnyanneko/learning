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
            labelTitle.Text = "�� �� �� ��";
            labelTitle.BorderStyle = BorderStyle.Fixed3D;
            labelTitle.BackColor = Color.LightGreen;
            labelTitle.ForeColor = Color.IndianRed;
            labelTitle.Font = new Font("�L�n������", 16, FontStyle.Bold | FontStyle.Underline);
            labelOutput.Text = "";

            //�U�貣�ͤ�U�ԲM�涵��
            for (int iMonth = 1; iMonth <= 12; iMonth++)
            { comboBoxBDM.Items.Add(iMonth); }
            comboBoxBDM.Text = DateTime.Today.Month.ToString();

            //�U�貣�ͦ~�U�ԲM�涵��
            int iYear = DateTime.Today.Year;
            while (iYear >= DateTime.Today.Year - 130)
            { comboBoxBDY.Items.Add(iYear--); }
            comboBoxBDY.Text = (DateTime.Today.Year - 18).ToString();

            vSetDays();
        }

        private void buttonOutput_Click(object sender, EventArgs e)
        {
            string strOutputData = "";

            if (textBoxFullName.Text != "")
            { strOutputData = "�m�W�G" + textBoxFullName.Text + "\n"; }

            if (radioButtonGenderMale.Checked)
            { strOutputData += "�ʧO�G" + radioButtonGenderMale.Text + "\n"; }
            else
            { strOutputData += "�ʧO�G" + radioButtonGenderFemale.Text + "\n"; }

            if (radioButtonBloodTypeA.Checked)
            { strOutputData += "�嫬�G" + radioButtonBloodTypeA.Text + "\n"; }
            else if (radioButtonBloodTypeB.Checked)
            { strOutputData += "�嫬�G" + radioButtonBloodTypeB.Text + "\n"; }
            else if (radioButtonBloodTypeO.Checked)
            { strOutputData += "�嫬�G" + radioButtonBloodTypeO.Text + "\n"; }
            else
            { strOutputData += "�嫬�G" + radioButtonBloodTypeAB.Text + "\n"; }

            if (checkBoxInterest1.Checked || checkBoxInterest2.Checked ||
                checkBoxInterest3.Checked || checkBoxInterest4.Checked)
            {
                strOutputData += "����G";
                if (checkBoxInterest1.Checked) { strOutputData += checkBoxInterest1.Text + " "; }
                if (checkBoxInterest2.Checked) { strOutputData += checkBoxInterest2.Text + " "; }
                if (checkBoxInterest3.Checked) { strOutputData += checkBoxInterest3.Text + " "; }
                if (checkBoxInterest4.Checked) { strOutputData += checkBoxInterest4.Text + " "; }
                strOutputData += "\n";
            }

            strOutputData += "�X�ͤ���G" + comboBoxBDY.Text + " / " + comboBoxBDM.Text +
                " / " + comboBoxBDD.Text + "\n";

            labelOutput.Text = strOutputData;
        }

        private void comboBoxBDM_SelectedIndexChanged(object sender, EventArgs e)
        { vSetDays(); }

        private void comboBoxBDY_SelectedIndexChanged(object sender, EventArgs e)
        { vSetDays(); }

        private void vSetDays()
        {
            //�U�貣�ͤ�U�ԲM�涵��
            comboBoxBDD.Items.Clear();
            int iDays = 0;  //iDays : �x�s���w������Ѽ�
            int icbxMthItem = int.Parse(comboBoxBDM.Text);  //icbxMthItem : �x�s����M��ثe��ܪ������
            if (icbxMthItem == 2)
            {
                int icbxYearItem = int.Parse(comboBoxBDY.Text);  //icbxYearItem : �x�s�~���M��ثe��ܪ��~����
                if (icbxYearItem % 400 == 0 || icbxYearItem % 4 == 0 && icbxYearItem % 100 != 0)
                { iDays = 29; }
                else
                { iDays = 28; }
            }
            else if (icbxMthItem == 4 || icbxMthItem == 6 || icbxMthItem == 9 || icbxMthItem == 11)
            { iDays = 30; }
            else
            { iDays = 31; }

            int iDay = 1;
            do
            {
                comboBoxBDD.Items.Add(iDay++);
            } while (iDay <= iDays);
            comboBoxBDD.Text = DateTime.Today.Day.ToString();
        }
    }
}
