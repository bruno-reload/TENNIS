<%@ Page Language="C#" AutoEventWireup="true" CodeBehind="AwardForm.aspx.cs" Inherits="TENNIS.VIEW.forms.AwardForm" %>

<!DOCTYPE html>

<html xmlns="http://www.w3.org/1999/xhtml">
<head runat="server">
    <title></title>
</head>
<body>
    <form id="form1" runat="server">
    <div>
    
    </div>
        <asp:Label ID="Label1" runat="server" Text="ID"></asp:Label>
        <asp:TextBox ID="id" runat="server"></asp:TextBox>
        <p>
            <asp:Label ID="Label2" runat="server" Text="Position"></asp:Label>
            <asp:TextBox ID="position" runat="server"></asp:TextBox>
        </p>
        <asp:Label ID="Label3" runat="server" Text="Value"></asp:Label>
        <asp:TextBox ID="value" runat="server"></asp:TextBox>
        <p>
            <asp:Label ID="Label4" runat="server" Text="Match"></asp:Label>
            <asp:TextBox ID="match" runat="server"></asp:TextBox>
        </p>
        <asp:Button ID="Button1" runat="server" OnClick="Button1_Click" Text="insere" />
        <asp:Button ID="Button4" runat="server" OnClick="Button4_Click" Text="atualiza" />
        <asp:Button ID="Button2" runat="server" OnClick="Button2_Click" Text="exclue" />
        <asp:Button ID="Button3" runat="server" OnClick="Button3_Click" Text="list" />
        <asp:Button ID="Button5" runat="server" OnClick="Button5_Click" Text="return" />
        <asp:GridView ID="grid" runat="server" AutoGenerateColumns="False">
            <Columns>
                <asp:BoundField DataField="Id" HeaderText="ID" />
                <asp:BoundField DataField="Position" HeaderText="Position" />
                <asp:BoundField DataField="Value" HeaderText="Value" />
                <asp:BoundField DataField="Match" HeaderText="Match" />
            </Columns>
        </asp:GridView>
    </form>
</body>
</html>
